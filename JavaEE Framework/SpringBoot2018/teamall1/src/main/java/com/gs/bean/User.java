package com.gs.bean;

import com.fasterxml.jackson.annotation.JsonIgnore;

import javax.persistence.*;
import java.io.Serializable;
import java.util.Set;

/**
 * @Entity 实体类，与数据表一一对应实体类
 * @Table 数据库中的哪张数据表
 */
@Entity
@Table(name = "t_user")
public class User implements Serializable {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;

    @Column(name = "name", nullable = false, length = 20)
    private String name;

    @Column(name = "age")
    private Integer age;

    // @JoinColumn(name = "") 指定另一方对象中哪个字段与本对象关联
    @OneToOne
    @JoinColumn(name = "id") // 此id是user_detail表中的字段id
    private UserDetail userDetail;

    @JsonIgnore
    @OneToMany(mappedBy = "user", fetch = FetchType.EAGER) // 默认为延迟加载，改成FetchType.EAGER后表示立即加载
    private Set<Order> orderSet;

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getAge() {
        return age;
    }

    public void setAge(Integer age) {
        this.age = age;
    }

    public UserDetail getUserDetail() {
        return userDetail;
    }

    public void setUserDetail(UserDetail userDetail) {
        this.userDetail = userDetail;
    }

    public Set<Order> getOrderSet() {
        return orderSet;
    }

    public void setOrderSet(Set<Order> orderSet) {
        this.orderSet = orderSet;
    }
}
