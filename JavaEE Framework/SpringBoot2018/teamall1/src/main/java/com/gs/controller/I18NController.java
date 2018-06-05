package com.gs.controller;

import com.gs.bean.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.context.MessageSource;
import org.springframework.context.i18n.LocaleContextHolder;
import org.springframework.context.support.MessageSourceResourceBundle;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.support.RequestContext;
import org.springframework.web.servlet.support.RequestContextUtils;

import javax.servlet.http.HttpServletRequest;
import java.util.Locale;
import java.util.ResourceBundle;

@RestController
@RequestMapping("/i18n")
@EnableAutoConfiguration
public class I18NController extends BaseController {

    @Autowired
    private MessageSource messageSource;

    @GetMapping("show")
    public String show(HttpServletRequest request) {
        return getMessage(request, "i18n/messages", "text");
    }

    @GetMapping("show1")
    public String show1(HttpServletRequest request) {
        Locale locale = LocaleContextHolder.getLocale();
        return messageSource.getMessage("text", null, locale);
    }

}
