package com.gs.bean;

public class DepartmentEmployee {

    private Integer deptId;
    private String title;
    private String des;
    private Integer empId;
    private String phone;
    private String name;

    public Integer getDeptId() {
        return deptId;
    }

    public void setDeptId(Integer deptId) {
        this.deptId = deptId;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDes() {
        return des;
    }

    public void setDes(String des) {
        this.des = des;
    }

    public Integer getEmpId() {
        return empId;
    }

    public void setEmpId(Integer empId) {
        this.empId = empId;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "DepartmentEmployee{" +
                "deptId=" + deptId +
                ", title='" + title + '\'' +
                ", des='" + des + '\'' +
                ", empId=" + empId +
                ", phone='" + phone + '\'' +
                ", name='" + name + '\'' +
                '}';
    }
}
