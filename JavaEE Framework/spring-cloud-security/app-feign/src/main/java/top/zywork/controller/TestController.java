package top.zywork.controller;

import com.netflix.hystrix.contrib.javanica.annotation.HystrixCommand;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;
import top.zywork.client.TestClient;
import top.zywork.vo.User;

@RestController
@RequestMapping("/test")
public class TestController {

    private TestClient testClient;

    @GetMapping("one")
    public User get() {
        return testClient.get();
    }

    @Autowired
    public void setTestClient(TestClient testClient) {
        this.testClient = testClient;
    }
}
