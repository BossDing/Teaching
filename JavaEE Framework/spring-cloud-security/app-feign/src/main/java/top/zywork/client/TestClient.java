package top.zywork.client;

import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.stereotype.Component;
import org.springframework.web.bind.annotation.GetMapping;
import top.zywork.vo.ResponseStatusVO;

@Component
@FeignClient(value = "service-provider", fallback = TestClientHystrix.class)
public interface TestClient {

    @GetMapping("/test/one")
    ResponseStatusVO get();

}
