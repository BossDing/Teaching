package top.zywork.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import top.zywork.bean.ResponseStatusVO;
import top.zywork.bean.User;

@RestController
@RequestMapping("/test")
public class TestController {

    @GetMapping("one")
    public ResponseStatusVO get() {
        User user = new User();
        user.setId(1000);
        user.setUsername("test");
        ResponseStatusVO statusVO = new ResponseStatusVO(1000, "成功", user);
        return statusVO;
    }

}
