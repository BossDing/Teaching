package com.gs.service.impl;

import com.gs.bean.User;
import com.gs.dao.UserDAO;
import com.gs.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.cache.annotation.CacheEvict;
import org.springframework.cache.annotation.CachePut;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.core.ValueOperations;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class UserServiceImpl implements UserService {

    @Autowired
    private UserDAO userDAO;

    @Autowired
    private RedisTemplate<String, User> redisTemplate;

//    @Override
//    public User findById(Long id) {
//        ValueOperations<String, User> valueOperations = redisTemplate.opsForValue();
//        User user = valueOperations.get("user:" + id);
//        if (user == null) {
//            System.out.println("从数据库中拿数据");
//            user = userDAO.findById(id).get();
//            valueOperations.set("user:" + id, user);
//        }
//        return user;
//    }


    /**
     * CachePut会自动对返回的对象进行缓存，并且可以根据指定的value来生成缓存的key，此时的value仅仅是缓存的key的前缀，
     * 自动生成的key 通常是value::主键值
     *
     * @param id
     * @return
     */
    @Override
    @CachePut(value = "user")
    public User findById(Long id) {
        return userDAO.findById(id).get();
    }

//    @Override
//    public void deleteById(Long id) {
//        ValueOperations<String, User> valueOperations = redisTemplate.opsForValue();
//        User user = valueOperations.get("user:" + id);
//        if (user != null) {
//            valueOperations.set("user:" + id, user, 0);
//        }
//        userDAO.deleteById(id);
//    }


    /**
     * CacheEvict是从缓存中移除
     * @param id
     */
    @Override
    @CacheEvict(value = "user")
    public void deleteById(Long id) {
        userDAO.deleteById(id);
    }

    @Override
    public void save(User user) {
        userDAO.save(user);
    }

    /**
     * key = "#user.id"表示引用参数中user对象的id属性
     * @param user
     */
    @Override
    @CacheEvict(value = "user", key = "#user.id")
    public void update(User user) {
        userDAO.save(user);
    }

    @Override
    public List<User> findByName(String name) {
        return userDAO.findByName(name);
    }

    @Override
    public List<User> findByAgeLessThan(int age) {
        return userDAO.findByAgeLessThan(age);
    }
}
