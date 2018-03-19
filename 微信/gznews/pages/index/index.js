//index.js
var app = getApp()
Page({
  data: {
    newList:[
      {
        title: '微信小程序最新更新',
        category: "科技",
        date: "2018-01-11",
        fistImg:"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1516243132&di=c1d8dff8241ac5079be4470a4f2c4011&imgtype=jpg&er=1&src=http%3A%2F%2Fwww.002cn.cn%2Fuploads%2Fallimg%2F170119%2F10511363Q-0.jpg"
      },
      {
        title: '程序员来相亲了！',
        category: "社会",
        date: "2018-01-11",
        fistImg: "https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1515648486588&di=2742833df23b26ce8bde2fc1b4522453&imgtype=0&src=http%3A%2F%2Fbbs.img.jrpe.net%2Fforum%2F201610%2F17%2F162524vl8qpcddmqrzcm6l.jpg"
      },
      {
        title: '做一个电商App需要多少资金？',
        category: "科技",
        date: "2018-01-11",
        fistImg: "https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1516243274&di=63fb42d80152776f1b8b262270e401cc&imgtype=jpg&er=1&src=http%3A%2F%2Fimg.zcool.cn%2Fcommunity%2F01f39b56147cb36ac7255b14a8cf25.png"
      },
      {
        title: 'Vue.js和React，你选择哪个？',
        category: "科技",
        date: "2018-01-11",
        fistImg: "https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1515648654242&di=fb24fcf6978b95c678d70eb4f9acb90f&imgtype=0&src=http%3A%2F%2Fimg.colabug.com%2F2017%2F06%2F074a1b7b1a5de0711a9e15ce483ed526.jpg"
      },
      {
        title: 'zywork开放基于Vue.js和Element开发的后台管理模板',
        category: "科技",
        date: "2018-01-11",
        fistImg: "https://github.com/GZWgssmart/zywork/blob/master/zywork-ui/zywork-ui-backend/src/assets/zywork-backend-ui.png?raw=true"
      }
    ]
  },
  bindViewTap: function() {
    wx.navigateTo({
      url: '../logs/logs'
    })
  },
  onLoad: function () {
    
  }
})
