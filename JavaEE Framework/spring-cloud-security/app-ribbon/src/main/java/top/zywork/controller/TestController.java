package top.zywork.controller;

import com.netflix.hystrix.contrib.javanica.annotation.HystrixCommand;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;
import top.zywork.vo.ResponseStatusVO;

@RestController
@RequestMapping("/test")
public class TestController {

    private RestTemplate restTemplate;

    @GetMapping("one")
    @HystrixCommand(fallbackMethod = "testClientError")
    public ResponseStatusVO get() {
        return restTemplate.getForObject("http://service-provider/test/one", ResponseStatusVO.class);
    }

    /**
     * 熔断方法只能返回其对应方法的返回类型或子类
     * @return
     */
    public ResponseStatusVO testClientError() {
        return new ResponseStatusVO(1002, "服务不可用", null);
    }

    @Autowired
    public void setRestTemplate(RestTemplate restTemplate) {
        this.restTemplate = restTemplate;
    }
}
