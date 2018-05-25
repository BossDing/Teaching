//index.js
//获取应用实例
const app = getApp()

Page({
  data: {
    // 真实项目中从后台获取轮播图url
    imgUrls: [
      'https://ss3.bdstatic.com/70cFv8Sh_Q1YnxGkpoWK1HF6hhy/it/u=4212029019,1040086828&fm=200&gp=0.jpg',
      'https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=139145090,3379227436&fm=200&gp=0.jpg',
      'https://ss2.bdstatic.com/70cFvnSh_Q1YnxGkpoWK1HF6hhy/it/u=887250356,1527852222&fm=200&gp=0.jpg'
    ],
    teas: []
  },
  onLoad: function () {
    var self = this
    // 访问后台，把返回的数据设置到 teas 变量
    wx.request({
      url: 'http://localhost:8080/tea/all',
      method: 'post',
      dataType: 'json',
      success: function (res) {
        /** // 此时的this不表示当前页面，而是指回调函数
        this.setData({
          teas: res.data
        })
        */
        self.setData({
          teas: res.data
        })
      }
    })
  },
  showDetail: function(event) {
    var current = this.data.teas[event.target.dataset.index];
    wx.navigateTo({
      url: '../detail/detail?id=' + current.id + '&img=' + current.img + '&title=' + current.title + '&des=' + current.des + '&price=' + current.price + '&salePrice=' + current.salePrice 
    })
  },
  addCart: function (event) {
    var currentCart = this.data.teas[event.target.dataset.index]
    app.addCart(currentCart)
  }
})