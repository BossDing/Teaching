package com.gs.controller;

import com.opensymphony.xwork2.ActionSupport;
import org.apache.struts2.convention.annotation.Action;
import org.apache.struts2.convention.annotation.Namespace;
import org.apache.struts2.convention.annotation.ParentPackage;
import org.apache.struts2.convention.annotation.Result;
import org.springframework.stereotype.Controller;

/**
 * Created by Administrator on 2017/12/4.
 */
@Controller
@ParentPackage("base-package")
@Namespace("/")
public class IndexController extends ActionSupport {

    @Action(value = "index", results = {@Result(name = "success", location = "/WEB-INF/views/user/login.jsp")})
    public String index() {
        return SUCCESS;
    }

}
