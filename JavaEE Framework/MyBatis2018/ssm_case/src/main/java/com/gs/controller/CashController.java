package com.gs.controller;

import com.gs.bean.Cash;
import com.gs.bean.User;
import com.gs.common.Constants;
import com.gs.common.Pager;
import com.gs.enums.ControllerStatusEnum;
import com.gs.query.CashQuery;
import com.gs.service.CashService;
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
import java.sql.Timestamp;
import java.util.Calendar;

/**
 * Created by Administrator on 2017/12/8.
 */
@Controller
@ParentPackage("base-package")
@Namespace("/cash")
public class CashController extends ActionSupport implements ServletRequestAware {

    @Autowired
    private CashService cashService;

    private HttpServletRequest request;

    private Cash cash;

    private Integer rows;
    private Integer page;
    private CashQuery cashQuery;
    private Pager pager;

    private ControllerStatusVO statusVO;

    @Action(value = "page", results = {@Result(name = "success", location = "/WEB-INF/views/cash/cash.jsp")})
    public String page() {
        return SUCCESS;
    }

    @Action(value = "save", results = {@Result(name = "success", type = "json", params = {"root", "statusVO"})})
    public String save() {
        try {
            HttpSession session = request.getSession();
            User user = (User) session.getAttribute(Constants.USER_IN_SESSION);
            cash.setUserId(user.getId());
            cash.setCreateTime(new Timestamp(Calendar.getInstance().getTime().getTime()));
            cashService.save(cash);
        } catch (RuntimeException e) {
            statusVO = ControllerStatusVO.status(ControllerStatusEnum.CASH_SAVE_FAIL);
        }
        statusVO = ControllerStatusVO.status(ControllerStatusEnum.CASH_SAVE_SUCCESS);
        return SUCCESS;
    }

    @Action(value = "update", results = {@Result(name = "success", type = "json", params = {"root", "statusVO"})})
    public String update() {
        try {
            cashService.update(cash);
        } catch (RuntimeException e) {
            statusVO = ControllerStatusVO.status(ControllerStatusEnum.CASH_UPDATE_FAIL);
        }
        statusVO = ControllerStatusVO.status(ControllerStatusEnum.CASH_UPDATE_SUCCESS);
        return SUCCESS;
    }

    @Action(value = "pager_criteria", results = {@Result(name = "success", type = "json", params = {"root", "pager"})})
    public String pagerCriteria() {
        pager = cashService.listPagerCriteria(page, rows, cashQuery);
        return SUCCESS;
    }

    public Cash getCash() {
        return cash;
    }

    public void setCash(Cash cash) {
        this.cash = cash;
    }

    public void setPage(Integer page) {
        this.page = page;
    }

    public void setRows(Integer rows) {
        this.rows = rows;
    }

    public CashQuery getCashQuery() {
        return cashQuery;
    }

    public void setCashQuery(CashQuery cashQuery) {
        this.cashQuery = cashQuery;
    }

    public Pager getPager() {
        return pager;
    }

    public ControllerStatusVO getStatusVO() {
        return statusVO;
    }

    @Override
    public void setServletRequest(HttpServletRequest httpServletRequest) {
        this.request = httpServletRequest;
    }
}
