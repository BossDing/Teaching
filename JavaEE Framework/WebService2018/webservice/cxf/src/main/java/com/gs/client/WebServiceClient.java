package com.gs.client;

/**
 * @author xiaopeng
 * @date 2018/3/16 11:39
 */
public class WebServiceClient {

    public static void main(String[] args) {
        HelloServiceImplService helloServiceImplService = new HelloServiceImplService();
        HelloService helloService = helloServiceImplService.getHelloServiceImplPort();
        helloService.sayHello();
        System.out.println(helloService.say("张一"));
    }
}
