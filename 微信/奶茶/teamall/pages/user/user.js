//index.js
//获取应用实例
const app = getApp()

Page({
  data: {
    userInfo: {},
    hasUserInfo: false,
    canIUse: wx.canIUse('button.open-type.getUserInfo') // wx.canIUse() 返回的结果为true
  },
  onLoad: function () {
    if (app.globalData.userInfo) {
      // app全局数据userInfo不为空，在真实环境下，这里确实会执行
      this.setData({
        userInfo: app.globalData.userInfo,
        hasUserInfo: true
      })
    } else if (this.data.canIUse) {
      // 测试环境下，一定会进入这里
      // 由于 getUserInfo 是网络请求，可能会在 Page.onLoad 之后才返回
      // 所以此处加入 callback 以防止这种情况
      app.userInfoReadyCallback = res => {
        this.setData({
          userInfo: res.userInfo,
          hasUserInfo: true
        })
      }
    } else {
      // 测试环境下，此else不会进入
      // 在没有 open-type=getUserInfo 版本的兼容处理
      wx.getUserInfo({
        success: res => {
          app.globalData.userInfo = res.userInfo
          this.setData({
            userInfo: res.userInfo,
            hasUserInfo: true
          })
        }
      })
    }
  },
  getUserInfo: function (e) {
    console.log(e)
    // e表示getuserinfo事件对象，此事件对象中包含了用户信息
    // 获取事件对象中的信息，以e.detail.的形式来获取
    app.globalData.userInfo = e.detail.userInfo
    // 更新当前页面的数据
    this.setData({
      userInfo: e.detail.userInfo, // 把获取的用户信息赋值给当前页面的userInfo变量 
      hasUserInfo: true // 设置已经获取到用户信息
    })
  },
  showCart: function(event) {
    app.showCart()
  }
})
