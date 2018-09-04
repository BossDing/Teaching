package com.gs.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.servlet.ModelAndView;

@Controller
@RequestMapping("/login")
public class LoginController {

    private Logger logger = LoggerFactory.getLogger(LoginController.class);

    @GetMapping("page")
    public ModelAndView page() {
        ModelAndView mav = new ModelAndView("login");
        mav.addObject("a", "a");
        return mav;
    }

    @PostMapping("do")
    @ResponseBody
    public String doLogin(String username, String password) {
        logger.info("{}, {}", username, password);
        return "hello";
    }

}
