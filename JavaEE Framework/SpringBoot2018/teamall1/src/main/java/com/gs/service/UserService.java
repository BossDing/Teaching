package com.gs.service;

import com.gs.bean.User;

import java.util.List;

public interface UserService {

    User findById(Long id);

    void deleteById(Long id);

    void save(User user);

    void update(User user);

    List<User> findByName(String name);

    List<User> findByAgeLessThan(int age);

}
