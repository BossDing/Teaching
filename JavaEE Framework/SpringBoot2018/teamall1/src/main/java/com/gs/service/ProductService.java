package com.gs.service;

import com.gs.bean.Product;

import java.util.List;

public interface ProductService {

    void save(Product product);

    List<Product> listAll();

    Product getById(Long id);

    void update(Product product);
}
