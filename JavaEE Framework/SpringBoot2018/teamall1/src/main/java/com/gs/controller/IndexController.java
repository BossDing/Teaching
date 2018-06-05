package com.gs.controller;

import com.gs.bean.Product;
import org.apache.shiro.authz.annotation.RequiresUser;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

@Controller
@RequestMapping("/index")
public class IndexController {

    /**
     * shiro的注解：
     * @RequiresAuthentication 需要进行用户认证
     * @RequiresUser 必须是系统的用户
     * @RequiresRoles({"role1", "role2"})
     * @RequiresPermissions({"p1", "p2"})
     * @RequiresGuest
     *
     * @return
     */
    @GetMapping("page")
    @RequiresUser
    public ModelAndView index() {
        ModelAndView mav = new ModelAndView("index");
        List<Product> productList = new ArrayList<>();
        productList.add(new Product("test", new BigDecimal(99.9), Calendar.getInstance().getTime()));
        mav.addObject("allProducts", productList);
        mav.addObject("product",new Product("test1", new BigDecimal(99.9), Calendar.getInstance().getTime()));
        return mav;
    }

}
