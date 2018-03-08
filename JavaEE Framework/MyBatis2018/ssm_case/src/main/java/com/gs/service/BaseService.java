package com.gs.service;

import com.gs.common.Pager;

import java.util.List;

/**
 * Created by Administrator on 2017/11/21.
 */
public interface BaseService {

    /**
     * 保存数据
     * @param obj
     */
    void save(Object obj);

    /**
     * 删除数据
     * @param obj
     */
    void remove(Object obj);

    /**
     * 根据id删除数据
     * @param id
     */
    void removeById(Long id);

    /**
     * 更新数据
     * @param obj
     */
    void update(Object obj);

    /**
     * 根据id查询数据
     * @param id
     * @return
     */
    Object getById(Long id);

    /**
     * 查询所有数据
     * @return
     */
    List<Object> listAll();

    /**
     * 分页查询所有数据
     * @param pageNo
     * @param pageSize
     * @return
     */
    Pager listPager(int pageNo, int pageSize);

    /**
     * 根据条件查询对象分页查询数据
     * @param pageNo
     * @param pageSize
     * @param obj
     * @return
     */
    Pager listPagerCriteria(int pageNo, int pageSize, Object obj);

}
