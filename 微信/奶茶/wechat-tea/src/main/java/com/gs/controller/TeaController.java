package com.gs.controller;

import com.gs.bean.Tea;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/tea")
public class TeaController {

    @PostMapping("all")
    public List<Tea> listAll() {
        // 来源于数据库
        List<Tea> teaList = new ArrayList<>();
        teaList.add(new Tea(1L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶1号", 20.0, 12.0, "超级好吃的奶茶"));
        teaList.add(new Tea(2L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶2号", 20.0, 14.0, "超级好吃的奶茶"));
        teaList.add(new Tea(3L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶3号", 20.0, 8.0, "超级好吃的奶茶"));
        teaList.add(new Tea(4L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶4号", 20.0, 18.0, "超级好吃的奶茶"));
        teaList.add(new Tea(5L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶5号", 29.0, 28.0, "超级好吃的奶茶"));
        teaList.add(new Tea(6L, "https://pic2.zhimg.com/v2-562e7e5b58d2f566e5cc39670fb02718_r.jpg",
                "奶茶6号", 20.0, 18.0, "超级好吃的奶茶"));
        return teaList;
    }

}
