package com.gs.controller;

import com.gs.bean.User;
import com.gs.common.Constants;
import com.gs.common.EncryptUtils;
import com.gs.enums.ControllerStatusEnum;
import com.gs.service.UserService;
import com.gs.vo.ControllerStatusVO;
import com.opensymphony.xwork2.ActionSupport;
import org.apache.struts2.convention.annotation.Action;
import org.apache.struts2.convention.annotation.Namespace;
import org.apache.struts2.convention.annotation.ParentPackage;
import org.apache.struts2.convention.annotation.Result;
import org.apache.struts2.interceptor.ServletRequestAware;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

/**
 * Created by Administrator on 2017/12/7.
 */
@Controller
@ParentPackage("base-package")
@Namespace("/user")
public class UserController extends ActionSupport implements ServletRequestAware {

    @Autowired
    private UserService userService;

    private HttpServletRequest request;

    private String phone;
    private String pwd;
    private String code;

    private ControllerStatusVO statusVO;

    @Action(value = "login", results = {@Result(name = "success", type = "json", params = {"root", "statusVO"})})
    public String login() {
        HttpSession session = request.getSession();
        Object obj = session.getAttribute(Constants.CODE_IN_SESSION);
        if (obj != null) {
            String checkCode = (String) obj;
            if (checkCode.equalsIgnoreCase(code)) {
                Object userObj = session.getAttribute(Constants.USER_IN_SESSION);
                if (userObj == null) {
                    User user = userService.getByPhonePwd(phone, EncryptUtils.md5(pwd));
                    if (user != null) {
                        session.setAttribute(Constants.USER_IN_SESSION, user);
                        statusVO = ControllerStatusVO.status(ControllerStatusEnum.USER_LOGIN_SUCCESS);
                    } else {
                        statusVO = ControllerStatusVO.status(ControllerStatusEnum.USER_LOGIN_FAIL);
                    }
                } else {
                    statusVO = ControllerStatusVO.status(ControllerStatusEnum.USER_ALREADY_LOGIN);
                }
            } else {
                statusVO = ControllerStatusVO.status(ControllerStatusEnum.USER_LOGIN_ERROR_CODE);
            }
        }
        return SUCCESS;
    }

    @Action(value = "home", results = {@Result(name = "success", location = "/WEB-INF/views/home.jsp")})
    public String home() {
        return SUCCESS;
    }

    @Action(value = "logout", results = {@Result(name = "success", location = "/WEB-INF/views/user/login.jsp")})
    public String logout() {
        request.getSession().invalidate();
        return SUCCESS;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public void setPwd(String pwd) {
        this.pwd = pwd;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public ControllerStatusVO getStatusVO() {
        return statusVO;
    }

    @Override
    public void setServletRequest(HttpServletRequest httpServletRequest) {
        this.request = httpServletRequest;
    }
}
