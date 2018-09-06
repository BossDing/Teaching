package com.gs.configuration;

import com.gs.filter.ValidateCodeFilter;
import com.gs.security.*;
import com.gs.security.mobile.SmsCodeAuthenticationFilter;
import com.gs.security.mobile.SmsCodeAuthenticationProvider;
import com.gs.service.SpringUserDetailsService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Configuration;
import org.springframework.security.authentication.AuthenticationManager;
import org.springframework.security.config.annotation.ObjectPostProcessor;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.builders.WebSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.web.access.intercept.FilterSecurityInterceptor;
import org.springframework.security.web.authentication.UsernamePasswordAuthenticationFilter;

/**
 * 核心流程：
 * 1）用户登录，此时与UserDetailsService返回的用户进行对比，UserDetailsService只根据用户名查找用户的密码和对应的权限
 * 2）如果用户密码对比相同，则用户登录成功，否则用户登录失败
 * 3）当用户访问指定的url时，InvocationSecurityMetadataSource去获取所有用户角色和能够访问此url的用户角色
 * 4）再把能够访问此url的用户角色交给AccessDecisionManager的decide方法进行判断，
 *  如果登录用户的角色与能访问此url的基本一个角色匹配，则意味着有权限，否则无权限
 *
 *  在SpringSecurity中，authority即为用户角色，而access list即为url
 */
@Configuration
@EnableWebSecurity
public class WebSecurityConfig extends WebSecurityConfigurerAdapter {

    @Autowired
    private SpringUserDetailsService springUserDetailsService;

    @Autowired
    private MyInvocationSecurityMetadataSource myInvocationSecurityMetadataSource;

    @Autowired
    private MyAccessDecisionManager myAccessDecisionManager;

    @Autowired
    private MyAuthenticationSuccessHandler myAuthenticationSuccessHandler;

    @Autowired
    private MyAuthenticationFailureHandler myAuthenticationFailureHandler;

    @Autowired
    private MyAccessDeniedHandler myAccessDeniedHandler;

    @Autowired
    private ValidateCodeFilter validateCodeFilter;

    @Autowired
    private SmsCodeAuthenticationProvider smsCodeAuthenticationProvider;

    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        auth.userDetailsService(springUserDetailsService).passwordEncoder(new BCryptPasswordEncoder());
    }

    @Override
    public void configure(WebSecurity web) throws Exception {
        web.ignoring().antMatchers("/");
    }

    @Override
    protected void configure(HttpSecurity http) throws Exception {
        /**
         * 验证码的实现方案：
         * 方案1、在UsernamePasswordAuthenticationFilter前添加一个过滤器，在过滤器中完成验证码的校验，
         * 如果验证码失败，则触发AuthenticationFailureHandler
         * 方案2、编码一个继承自UsernamePasswordAuthenticationFilter的过滤器，在过滤器中重写attemptAuthentication完成验证码校验，
         * 此过滤器也需要添加在UsernamePasswordAuthenticationFilter之前。与第一种方案基本一样
         * 方案3、提供独立的AuthenticationToken，AuthenticationProvider和AuthenticationFilter来完成校验
         */
        SmsCodeAuthenticationFilter smsCodeAuthenticationFilter = new SmsCodeAuthenticationFilter();
        smsCodeAuthenticationFilter.setAuthenticationManager(super.authenticationManagerBean());
        smsCodeAuthenticationFilter.setAuthenticationFailureHandler(myAuthenticationFailureHandler);
        smsCodeAuthenticationFilter.setAuthenticationSuccessHandler(myAuthenticationSuccessHandler);

        http.authenticationProvider(smsCodeAuthenticationProvider)
                .addFilterBefore(validateCodeFilter, UsernamePasswordAuthenticationFilter.class) // 验证码
                .addFilterAfter(smsCodeAuthenticationFilter, UsernamePasswordAuthenticationFilter.class) // 手机号
                .authorizeRequests()
                .withObjectPostProcessor(new ObjectPostProcessor<FilterSecurityInterceptor>() {
                    @Override
                    public <O extends FilterSecurityInterceptor> O postProcess(O o) {
                        o.setSecurityMetadataSource(myInvocationSecurityMetadataSource);
                        o.setAccessDecisionManager(myAccessDecisionManager);
                        return o;
                    }
                })
                .and()
                .formLogin()
                .loginPage("/login/require")
                .loginProcessingUrl("/login/do") // UsernamePasswordAuthenticationFilter过滤的地址，需要给SmsCodeAuthenticationFilter指定另外一个地址，如果需要共用一个登录地址，则需要把用户名和手机号设置成统一的名称，如account
                .permitAll()
                .successHandler(myAuthenticationSuccessHandler)
                .failureHandler(myAuthenticationFailureHandler)
                .and()
                .logout()
                .permitAll()
                .and()
                .csrf()
                .disable()
                .exceptionHandling()
                .accessDeniedHandler(myAccessDeniedHandler);
    }
}
