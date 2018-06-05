package com.gs.dao;

import com.gs.bean.Product;
import org.apache.ibatis.annotations.Select;
import org.apache.ibatis.annotations.Update;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface ProductDAO {

    void save(Product product);

    List<Product> listAll();

    @Select("select * from t_product where id = #{id}")
    Product getById(Long id);

    @Update("update t_product set title = #{title}, price = #{price} where id = #{id}")
    void update(Product product);

}
