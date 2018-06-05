package com.gs.service;

import com.gs.bean.Order;
import com.gs.bean.Product;
import com.gs.bean.User;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

import java.math.BigDecimal;
import java.util.Calendar;
import java.util.List;
import java.util.Set;

@RunWith(SpringRunner.class)
@SpringBootTest
public class ProductServiceTest {

    @Autowired
    private ProductService productService;

    @Test
    public void testSave() {
        Product product = new Product();
        product.setTitle("商品1");
        product.setPrice(new BigDecimal(100.0));
        product.setCreateTime(Calendar.getInstance().getTime());
        productService.save(product);
    }

    @Test
    public void testListAll() {
        List<Product> productList = productService.listAll();
        System.out.println();
    }

    @Test
    public void testGetById() {
        Product product =productService.getById(1L);
        System.out.println();;
    }

    @Test
    public void testUpdate() {
        Product product = new Product();
        product.setId(1L);
        product.setTitle("p1");
        product.setPrice(new BigDecimal(1000.0));
        productService.update(product);
    }
}
