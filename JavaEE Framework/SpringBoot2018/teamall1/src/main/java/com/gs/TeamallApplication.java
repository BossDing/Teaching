package com.gs;

import org.mybatis.spring.annotation.MapperScan;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.cache.annotation.EnableCaching;

/**
 * SpringBoot项目启动的java类，包含有启动项目的main方法
 *
 * @SpringBootApplication 声明SpringBoot项目的启动类
 *
 * 简单约定：启动类的存储位置，与controller包的位置是一样的
 *  com.gs.teamall.TeamallApplication
 *  com.gs.teamall.controller
 *
 *  com.gs.controller
 *  com.gs.TeamallApplication
 */
@SpringBootApplication
@MapperScan("com.gs.dao")
@EnableCaching
public class TeamallApplication {

    public static void main(String[] args) {
        // SpringApplication是由SpringBoot提供的类，此类的run方法用于启动SpringBoot项目
        SpringApplication.run(TeamallApplication.class, args);
    }
}
