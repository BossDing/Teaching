package com.gs;

import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;

@Service
// @FeignClient 中的name，如果是引用同一个服务，多个接口中的name可以一样
@FeignClient(name = "service-provider", fallback = HelloServiceFallback.class)
public interface HelloService {

    // 与服务提供者中的mapping一致
    @GetMapping("/hello/say/{name}")
    String say(@PathVariable("name") String name);
}
