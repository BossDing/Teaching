package com.gs.service;

import com.gs.bean.Order;
import com.gs.bean.User;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

import java.util.Iterator;
import java.util.List;
import java.util.Set;

@RunWith(SpringRunner.class)
@SpringBootTest
public class UserServiceTest {

    @Autowired
    private UserService userService;

    @Test
    public void testFindById() {
        User user = userService.findById(3L);
        if (user != null) {
            Set<Order> orderSet = user.getOrderSet();
            for (Order order : orderSet) {
                System.out.println(order.getCreateTime());
            }
        }
    }

    @Test
    public void testFindByAgeLessThan() {
       List<User> userList = userService.findByAgeLessThan(30);
        System.out.println();
    }

    @Test
    public void testDeleteById() {
        userService.deleteById(2L);
    }

    @Test
    public void testUpdate() {
        User user = new User();
        user.setId(3L);
        user.setName("new name!!!");
        userService.update(user);
    }
}
