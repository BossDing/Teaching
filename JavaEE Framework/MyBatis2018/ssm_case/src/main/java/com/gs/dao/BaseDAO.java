package com.gs.dao;

import com.gs.common.Pager;

import java.util.List;

/**
 * Created by Administrator on 2017/11/21.
 */
public interface BaseDAO {

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
     * 根据id获取数据
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
     * @param pager
     * @return
     */
    List<Object> listPager(Pager pager);

    /**
     * 查询所有数据时计数
     * @return
     */
    Long count();

    /**
     * 根据条件查询对象分页查找数据
     * @param pager
     * @param obj
     * @return
     */
    List<Object> listPagerCriteria(Pager pager, Object obj);

    /**
     * 根据条件查询对象分页查找数据时计数
     * @param obj
     * @return
     */
    Long countCriteria(Object obj);


}
