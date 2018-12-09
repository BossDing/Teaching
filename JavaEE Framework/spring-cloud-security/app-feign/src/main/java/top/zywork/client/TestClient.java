package top.zywork.client;

import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.stereotype.Component;
import org.springframework.web.bind.annotation.GetMapping;
import top.zywork.vo.User;

@Component
@FeignClient("service-provider")
public interface TestClient {

    @GetMapping("/test/one")
    User get();

}
