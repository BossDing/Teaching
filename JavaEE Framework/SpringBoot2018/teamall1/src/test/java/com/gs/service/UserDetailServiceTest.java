package com.gs.service;

import com.gs.bean.UserDetail;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

@RunWith(SpringRunner.class)
@SpringBootTest
public class UserDetailServiceTest {

    @Autowired
    private UserDetailService userDetailService;

    @Test
    public void testFindById() {
        UserDetail userDetail = userDetailService.findById(2L);
        if (userDetail != null) {
            System.out.println(userDetail.getUser().getName());
        }
    }

}
