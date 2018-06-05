package com.gs.controller;

import org.springframework.web.servlet.support.RequestContextUtils;

import javax.servlet.http.HttpServletRequest;
import java.util.Locale;
import java.util.ResourceBundle;

public class BaseController {

    public String getMessage(HttpServletRequest request, String messageLocation,  String key) {
        // 区域信息
        Locale locale = RequestContextUtils.getLocale(request);
        ResourceBundle bundle = ResourceBundle.getBundle(messageLocation + "_" + locale.getLanguage() + "_" + locale.getCountry(), locale);
        return bundle.getString(key);
    }

}
