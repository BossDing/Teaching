//app.js
App({
  onLaunch: function () {
    // 展示本地存储能力
    var logs = wx.getStorageSync('logs') || []
    logs.unshift(Date.now())
    wx.setStorageSync('logs', logs)

    // 登录
    wx.login({
      success: res => {
        // 发送 res.code 到后台换取 openId, sessionKey, unionId
      }
    })
    // 获取用户信息
    wx.getSetting({
      success: res => {
        if (res.authSetting['scope.userInfo']) {
          // 已经授权，可以直接调用 getUserInfo 获取头像昵称，不会弹框
          wx.getUserInfo({
            success: res => {
              // 可以将 res 发送给后台解码出 unionId
              // 把返回的用户信息保存到全局变量中，其他页面可以使用到此全局变量 
              this.globalData.userInfo = res.userInfo

              // 由于 getUserInfo 是网络请求，可能会在 Page.onLoad 之后才返回
              // 所以此处加入 callback 以防止这种情况
              if (this.userInfoReadyCallback) {
                this.userInfoReadyCallback(res)
              }
            }
          })
        }
      }
    })
  },
  addCart: function (currentCart) {
    // 本地存储缓存购物车信息，被多个页面共享
    // cart为json数组
    // cart: [
    //   {},
    //   {}
    // ]
    var cart = wx.getStorageSync('cart')
    if (cart != null && cart != 'undefined' && cart !== '') {
      var index = -1 // 用来标记当前的商品在购物车数组对象中的索引
      cart.forEach(function (item, idx) {
        if (item.id == currentCart.id) {
          // 第一种，当前添加的商品已经在购物车中，此时数量的累加
          index = idx
        }
      })
      if (index >= 0) {
        // 数量累加
        cart[index].count += 1
      } else {
        // 第二种，当前添加的商品没有在购物车中
        currentCart.count = 1
        cart.unshift(currentCart)
      }
      // 把修改后的购物车信息重新放入缓存中
      wx.setStorageSync('cart', cart)
    } else {
      var cart = [] // json数组
      currentCart.count = 1
      cart.unshift(currentCart)
      wx.setStorageSync('cart', cart)
    }
  },
  showCart: function () {
    wx.switchTab({
      url: '../cart/cart'
    })
  },
  globalData: {
    userInfo: null
  }
})