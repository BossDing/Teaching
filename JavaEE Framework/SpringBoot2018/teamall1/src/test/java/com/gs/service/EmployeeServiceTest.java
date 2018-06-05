package com.gs.service;

import com.gs.bean.Employee;
import com.gs.bean.Order;
import com.gs.bean.User;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

import java.util.Set;

@RunWith(SpringRunner.class)
@SpringBootTest
public class EmployeeServiceTest {

    @Autowired
    private EmployeeService employeeService;

    @Test
    public void testFindById() {
       Employee employee = employeeService.findById(1L);
        System.out.println("aa");
    }
}
