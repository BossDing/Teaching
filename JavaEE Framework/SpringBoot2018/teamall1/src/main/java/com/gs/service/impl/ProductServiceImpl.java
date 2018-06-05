package com.gs.service.impl;

import com.gs.bean.Product;
import com.gs.dao.ProductDAO;
import com.gs.service.ProductService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.cache.annotation.CachePut;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.core.ValueOperations;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ProductServiceImpl implements ProductService {

    @Autowired
    private ProductDAO productDAO;


    /**
     * RedisTemplate是由spring-data-redis提供的一个用于操作Redis数据库的模板类，已经封装了操作redis的各种方法
     *
     * RedisTemplate<String, Object> key为String类型，而Value为Object类型
     */
    @Autowired
    private RedisTemplate<String, Product> redisTemplate;

    @Override
    public void save(Product product) {
        productDAO.save(product);
    }

    @Override
    public List<Product> listAll() {
        return productDAO.listAll();
    }

    @Override
    @CachePut(value = "product")
    public Product getById(Long id) {
        return productDAO.getById(id);
    }

    @Override
    public void update(Product product) {
        productDAO.update(product);
    }
}
