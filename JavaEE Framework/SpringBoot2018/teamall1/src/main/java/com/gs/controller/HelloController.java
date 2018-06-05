package com.gs.controller;

import com.gs.bean.User;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.support.RequestContextUtils;

import javax.servlet.http.HttpServletRequest;
import java.util.Locale;
import java.util.ResourceBundle;

/**
 * @RestController 跟@Controller的意义是一样的，声明这是一个控制器组件，
 * 区别在于@RestController内部的方法被声明返回JSON数据，方法上不需要@ResponseBody注解了
 *
 * @EnableAutoConfiguration 开启自动配置，不需要配置springmvc，自动配置好IoC，并且使用提注解扫描的形式
 *
 * @GetMapping @RequestMapping(method = RequestMethod.GET)
 * @PostMapping @RequestMapping(method = RequestMethod.POST)
 */
@RestController
@RequestMapping("/")
@EnableAutoConfiguration
public class HelloController {

    private static final Logger logger = LoggerFactory.getLogger(HelloController.class);

    @GetMapping("hello")
    public User hello() {
        logger.info("hello()");
        User user = new User();
        user.setId(100L);
        return user;
    }

}
