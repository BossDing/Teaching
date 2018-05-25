package com.gs.bean;

public class Tea {

    private Long id;
    private String img;
    private String title;
    private Double price;
    private Double salePrice;
    private String des;

    public Tea() {
    }

    public Tea(Long id, String img, String title, Double price, Double salePrice, String des) {
        this.id = id;
        this.img = img;
        this.title = title;
        this.price = price;
        this.salePrice = salePrice;
        this.des = des;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getImg() {
        return img;
    }

    public void setImg(String img) {
        this.img = img;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public Double getPrice() {
        return price;
    }

    public void setPrice(Double price) {
        this.price = price;
    }

    public Double getSalePrice() {
        return salePrice;
    }

    public void setSalePrice(Double salePrice) {
        this.salePrice = salePrice;
    }

    public String getDes() {
        return des;
    }

    public void setDes(String des) {
        this.des = des;
    }
}
