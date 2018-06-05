package com.gs.service.impl;

import com.gs.bean.Employee;
import com.gs.dao.EmployeeDAO;
import com.gs.service.EmployeeService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class EmployeeServiceImpl implements EmployeeService {

    @Autowired
    private EmployeeDAO employeeDAO;

    @Override
    public Employee findById(Long id) {
        return employeeDAO.findById(id).get();
    }
}
