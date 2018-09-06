package com.gs.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/login")
public class LoginController {

    private Logger logger = LoggerFactory.getLogger(LoginController.class);

    @GetMapping("require")
    public String require() {
        return "未认证的用户，请登录！";
    }

    @PostMapping("do")
    public String doLogin(String username, String password, String validateCode) {
        logger.info("{}, {}", username, password);
        return "hello";
    }

    @PostMapping("mobile")
    public String doLoginMobile(String mobile) {
        logger.info("{}, {}", mobile);
        return "hello";
    }

}
