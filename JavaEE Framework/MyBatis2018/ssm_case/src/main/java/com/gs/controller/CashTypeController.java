package com.gs.controller;

import com.gs.common.Combobox;
import com.gs.service.CashTypeService;
import com.gs.vo.CashTypeVO;
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
@Namespace("/cash_type")
public class CashTypeController extends ActionSupport {

    @Autowired
    private CashTypeService cashTypeService;

    private Long pid;

    private List<Combobox> comboboxes;

    @Action(value = "get", results = {@Result(name = "success", type = "json", params = {"root", "comboboxes"})})
    public String getByPid() {
        List<CashTypeVO> cashTypeVOList = cashTypeService.getByPid(pid);
        comboboxes = new ArrayList<>();
        for (CashTypeVO cashTypeVO : cashTypeVOList) {
            comboboxes.add(new Combobox(cashTypeVO.getId() + "", cashTypeVO.getType(), false));
        }
        return SUCCESS;
    }

    public void setPid(Long pid) {
        this.pid = pid;
    }

    public List<Combobox> getComboboxes() {
        return comboboxes;
    }
}
