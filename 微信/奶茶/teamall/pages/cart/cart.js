//index.js
//获取应用实例
const app = getApp()

Page({
  data: {
    cart: [],
    cost: 0
  },
  onShow: function() {
    var cartFromStorage = wx.getStorageSync('cart')
    if (cartFromStorage != null && cartFromStorage.length > 0) {
      this.setData({
        cart: cartFromStorage
      })
     this.calCost()
    }
  },
  cartPlus: function (event) {
    var index = event.target.dataset.index
    var cart = wx.getStorageSync('cart')
    if (cart != null && cart != 'undefined' && cart !== '') {
      cart[index].count += 1
      wx.setStorageSync('cart', cart)
      this.setData({
        cart: cart
      })
    }
    this.calCost()
  },
  cartMinus: function (event) {
    var index = event.target.dataset.index
    var cart = wx.getStorageSync('cart')
    if (cart != null && cart != 'undefined' && cart !== '') {
      if (cart[index].count === 1) {
        cart.splice(index, 1)
      } else {
        cart[index].count -= 1
      }
      wx.setStorageSync('cart', cart)
      this.setData({
        cart: cart
      })
    }
    this.calCost()
  },
  removeCart: function(event) {
    var index = event.target.dataset.index
    var cart = wx.getStorageSync('cart')
    if (cart != null && cart != 'undefined' && cart !== '') {
      cart.splice(index, 1)
      wx.setStorageSync('cart', cart)
      this.setData({
        cart: cart
      })
    }
    this.calCost()
  },
  calCost: function () {
      var sum = 0
      this.data.cart.forEach(function (item, idx) {
        sum += item.count * item.salePrice
      })
      this.setData({
        cost: sum
      })
    }
})
