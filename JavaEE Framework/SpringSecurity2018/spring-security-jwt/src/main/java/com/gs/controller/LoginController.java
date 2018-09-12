package com.gs.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/login")
public class LoginController {

    private Logger logger = LoggerFactory.getLogger(LoginController.class);

    @GetMapping("require")
    public String require() {
        return "未认证的用户，请登录！";
    }

    @PostMapping("do")
    public String doLogin(String username, String password) {
        logger.info("{}, {}", username, password);
        return "hello";
    }

}
