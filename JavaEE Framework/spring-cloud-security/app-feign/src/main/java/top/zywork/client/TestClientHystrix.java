package top.zywork.client;

import org.springframework.stereotype.Component;
import top.zywork.vo.ResponseStatusVO;

@Component
public class TestClientHystrix implements TestClient {
    @Override
    public ResponseStatusVO get() {
        return new ResponseStatusVO(10002, "服务不可用", null);
    }
}
