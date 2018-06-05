package com.gs.service.impl;

import com.gs.bean.UserDetail;
import com.gs.dao.UserDetailDAO;
import com.gs.service.UserDetailService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class UserDetailServiceImpl implements UserDetailService {

    @Autowired
    private UserDetailDAO userDetailDAO;

    @Override
    public UserDetail findById(Long id) {
        return userDetailDAO.findById(id).get();
    }
}
