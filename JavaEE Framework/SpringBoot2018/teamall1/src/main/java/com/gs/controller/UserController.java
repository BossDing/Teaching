package com.gs.controller;

import com.gs.bean.User;
import com.gs.service.UserService;
import org.apache.shiro.authz.annotation.RequiresAuthentication;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/user")
@EnableAutoConfiguration
public class UserController {

    @Autowired
    private UserService userService;

    @GetMapping("one/{id}")
    @RequiresAuthentication
    public User findById(@PathVariable("id") Long id) {
        return userService.findById(id);
    }

    @PostMapping("save")
    public String save(User user) {
        userService.save(user);
        return "ok";
    }

    @GetMapping("del/{id}")
    public String del(@PathVariable("id") Long id) {
        userService.deleteById(id);
        return "ok";
    }

    @PostMapping("update")
    public String update(User user) {
        userService.update(user);
        return "ok";
    }

    @GetMapping("name/{name}")
    public List<User> findById(@PathVariable("name") String name) {
        return userService.findByName(name);
    }

}
