//index.js
//获取应用实例
const app = getApp()

Page({
  data: {
    tea: {}
  },
  onLoad: function (options) {
    var tea = {}
    tea.id = options.id
    tea.img = options.img
    console.log(tea.img)
    tea.title = options.title
    tea.des = options.des
    tea.price = options.price
    tea.salePrice = options.salePrice
    this.setData({
      tea: tea
    });
  },
  addCart: function (event) {
    var currentCart = this.data.tea
    app.addCart(currentCart)
  },
  showCart: function (event) {
    app.showCart()
  }
})
