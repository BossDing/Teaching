package com.gs.server;

import javax.xml.ws.Endpoint;

/**
 * @author xiaopeng
 * @date 2018/3/16 10:47
 */
public class WebServicePublisher {

    public static void main(String[] args) {
        Endpoint endpoint = Endpoint.publish("http://127.0.0.1/webservice/hello", new HelloServiceImpl());
    }

}
