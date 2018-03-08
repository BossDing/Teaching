package com.gs.controller;

import com.gs.common.CheckCodeUtils;
import com.gs.common.Constants;
import com.opensymphony.xwork2.ActionSupport;
import org.apache.struts2.convention.annotation.Action;
import org.apache.struts2.convention.annotation.Namespace;
import org.apache.struts2.convention.annotation.ParentPackage;
import org.apache.struts2.interceptor.ServletRequestAware;
import org.apache.struts2.interceptor.ServletResponseAware;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.stereotype.Controller;

import javax.imageio.ImageIO;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.io.OutputStream;

/**
 * Created by Administrator on 2017/12/7.
 */
@Controller
@ParentPackage("base-package")
@Namespace("/code")
public class CheckCodeController extends ActionSupport implements ServletRequestAware, ServletResponseAware {

    private Logger logger = LoggerFactory.getLogger(CheckCodeController.class);

    private HttpServletRequest request;
    private HttpServletResponse response;

    @Action(value = "png")
    public void code() {
        String code = CheckCodeUtils.randomCode();
        HttpSession session = request.getSession();
        session.setAttribute(Constants.CODE_IN_SESSION, code);
        BufferedImage image = CheckCodeUtils.generateImage(code);
        try {
            OutputStream out = response.getOutputStream();
            ImageIO.write(image, "png", out);
        } catch (IOException e) {
            logger.error(e.getMessage());
        }
    }

    @Override
    public void setServletRequest(HttpServletRequest httpServletRequest) {
        this.request = httpServletRequest;
    }

    @Override
    public void setServletResponse(HttpServletResponse httpServletResponse) {
        this.response = httpServletResponse;
    }
}
