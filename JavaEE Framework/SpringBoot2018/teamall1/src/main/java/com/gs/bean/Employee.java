package com.gs.bean;

import javax.persistence.*;
import java.util.Set;

@Entity
@Table(name = "t_employee")
public class Employee {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;

    @Column(name = "name")
    private String name;

    @OneToMany(mappedBy = "employee", fetch = FetchType.EAGER)
    private Set<DepartEmp> departEmpSet;

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

    public Set<DepartEmp> getDepartEmpSet() {
        return departEmpSet;
    }

    public void setDepartEmpSet(Set<DepartEmp> departEmpSet) {
        this.departEmpSet = departEmpSet;
    }
}
