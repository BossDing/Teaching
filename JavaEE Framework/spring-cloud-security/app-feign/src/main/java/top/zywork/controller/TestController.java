package top.zywork.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import top.zywork.client.TestClient;
import top.zywork.vo.ResponseStatusVO;

@RestController
@RequestMapping("/test")
public class TestController {

    private TestClient testClient;

    @GetMapping("one")
    public ResponseStatusVO get() {
        return testClient.get();
    }

    @Autowired
    public void setTestClient(TestClient testClient) {
        this.testClient = testClient;
    }
}
