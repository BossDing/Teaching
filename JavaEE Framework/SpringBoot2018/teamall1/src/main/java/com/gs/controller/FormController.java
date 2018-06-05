package com.gs.controller;

import com.gs.bean.User;
import com.gs.bean.User1;
import org.apache.shiro.SecurityUtils;
import org.apache.shiro.authc.AuthenticationException;
import org.apache.shiro.authc.UsernamePasswordToken;
import org.apache.shiro.subject.Subject;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.servlet.ModelAndView;

@Controller
@RequestMapping("/form")
public class FormController {

    @GetMapping("page")
    public ModelAndView page() {
        ModelAndView mav = new ModelAndView("form");
        User1 user = new User1();
        user.setName("test");
        mav.addObject("user", user);
        return mav;
    }

    @PostMapping("login")
    @ResponseBody
    public User1 login(User1 user) {
        Subject subject = SecurityUtils.getSubject();
        try {
            subject.login(new UsernamePasswordToken(user.getName(), user.getPassword()));
        } catch (AuthenticationException e) {
            System.out.println("用户登录失败");
        }
        return user;
    }

}
