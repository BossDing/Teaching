package com.gs.dao;

import com.gs.bean.UserDetail;
import org.springframework.data.jpa.repository.JpaRepository;

public interface UserDetailDAO  extends JpaRepository<UserDetail, Long> {
}
