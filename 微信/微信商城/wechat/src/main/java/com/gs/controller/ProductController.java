package com.gs.controller;

import com.gs.bean.Product;
import org.springframework.web.bind.annotation.*;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

/**
 * @author xiaopeng
 * @date 2018/3/22 16:06
 */
@RestController
@RequestMapping("/product")
public class ProductController {

    @GetMapping("all")
    public List<Product> listAll(){
        List<Product> productList = new ArrayList<>();
        productList.add(new Product(1L, "iPhone X 1", "最便宜的X 1", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg"));
        productList.add(new Product(2L, "iPhone X 2", "最便宜的X 2", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg"));
        productList.add(new Product(3L, "iPhone X 3", "最便宜的X 3", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg"));
        productList.add(new Product(4L, "iPhone X 4", "最便宜的X 4", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg"));
        productList.add(new Product(5L, "iPhone X 5", "最便宜的X 5", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg"));
        return productList;
    }

    @PostMapping("one/{id}")
    public Product getById(@PathVariable("id") Long id) {
        // 根据id查找商品信息
        return new Product(1L, "iPhone X 1", "最便宜的X 1", new BigDecimal(9999.0), new BigDecimal(999.9), "http://img02.tooopen.com/images/20150928/tooopen_sy_143912755726.jpg");
    }

}
