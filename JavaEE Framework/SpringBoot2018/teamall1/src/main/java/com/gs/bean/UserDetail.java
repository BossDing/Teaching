package com.gs.bean;

import com.fasterxml.jackson.annotation.JsonIgnore;

import javax.persistence.*;
import java.io.Serializable;

@Entity
@Table(name = "t_user_detail")
public class UserDetail implements Serializable {

    @Id
    @Column(name = "id")
    private Long id;

    @Column(name = "gender", length = 2)
    private String gender;

    @JsonIgnore
    @OneToOne
    @JoinColumn(name = "id") // 此id是user表中的id字段
    private User user;

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public User getUser() {
        return user;
    }

    public void setUser(User user) {
        this.user = user;
    }
}
