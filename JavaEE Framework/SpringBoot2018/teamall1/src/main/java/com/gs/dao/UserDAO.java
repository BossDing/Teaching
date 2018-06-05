package com.gs.dao;

import com.gs.bean.User;
import org.springframework.data.repository.CrudRepository;

import java.util.List;

/**
 * Spring data jpa提供了一些包含有常用的数据库访问接口：JpaRepository, CrudRepository, PagingAndSortingRepository
 *  自己的操作数据表定义好的接口只需要继承算成jpa提供的接口，而不需要实现
 * Repository
 *  CrudRepository: 完成单表增删改查功能的接口
 *      JpaRepository:
 */
public interface UserDAO extends CrudRepository<User, Long> {

//    @Query(value = "from User where name = :name")
//    List<User> findByName(@Param("name") String name);

    // select * from t_user where name = name
    List<User> findByName(String name);

    // select * from t_user where age < age
    List<User> findByAgeLessThan(int age);

    // select * from t_user where name = name and age = age
    List<User> findByNameAndAge(String name, int age);

    // select * from t_user where name = name or age = age
    List<User> findByNameOrAge(String name, int age);

    // select * from t_user where name like %name%
    List<User> findByNameContains(String name);
}
