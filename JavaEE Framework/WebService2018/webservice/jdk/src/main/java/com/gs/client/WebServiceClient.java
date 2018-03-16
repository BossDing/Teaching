package com.gs.client;

/**
 * @author xiaopeng
 * @date 2018/3/16 11:01
 */
public class WebServiceClient {

    public static void main(String[] args) {
        HelloServiceImplService helloServiceImplService = new HelloServiceImplService();
        HelloServiceImpl helloService = helloServiceImplService.getHelloServiceImplPort();
        helloService.sayHello();
        System.out.println(helloService.say("name"));
    }

}
