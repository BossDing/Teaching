package com.gs.controller;

import com.gs.bean.PayType;
import com.gs.common.Combobox;
import com.gs.service.PayTypeService;
import com.opensymphony.xwork2.ActionSupport;
import org.apache.struts2.convention.annotation.Action;
import org.apache.struts2.convention.annotation.Namespace;
import org.apache.struts2.convention.annotation.ParentPackage;
import org.apache.struts2.convention.annotation.Result;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by Administrator on 2017/12/11.
 */
@Controller
@ParentPackage("base-package")
@Namespace("/pay_type")
public class PayTypeController extends ActionSupport {

    @Autowired
    private PayTypeService payTypeService;

    private List<Combobox> comboboxes;

    @Action(value = "all", results = {@Result(name = "success", type = "json", params = {"root", "comboboxes"})})
    public String all() {
        List<Object> objectList = payTypeService.listAll();
        comboboxes = new ArrayList<>();
        for (Object obj : objectList) {
            PayType payType = (PayType) obj;
            comboboxes.add(new Combobox(payType.getId() + "", payType.getType(), false));
        }
        return SUCCESS;
    }

    public List<Combobox> getComboboxes() {
        return comboboxes;
    }
}
