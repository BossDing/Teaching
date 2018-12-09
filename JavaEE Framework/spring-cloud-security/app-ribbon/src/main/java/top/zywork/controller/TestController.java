package top.zywork.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;
import top.zywork.vo.User;

@RestController
@RequestMapping("/test")
public class TestController {

    private RestTemplate restTemplate;

    @GetMapping("one")
    public User get() {
        return restTemplate.getForObject("http://service-provider/test/one", User.class);
    }

    @Autowired
    public void setRestTemplate(RestTemplate restTemplate) {
        this.restTemplate = restTemplate;
    }
}
