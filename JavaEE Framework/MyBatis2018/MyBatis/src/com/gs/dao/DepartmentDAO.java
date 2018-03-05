package com.gs.dao;

import com.gs.bean.Department;
import com.gs.bean.DepartmentEmployee;
import com.gs.bean.DepartmentQuery;
import com.gs.bean.Pager;
import org.apache.ibatis.annotations.Param;

import java.util.List;

public interface DepartmentDAO {

    /**
     * 获取所有的Department信息
     * @return Department集合
     */
    List<Department> listAll();

    /**
     * 根据编号查找Department，并且把关联的DepartmentDetail也查询出来
     * @param id 部门编号
     * @return Department信息
     */
    Department getById(Integer id);

    /**
     * 根据编号查找Department，并且把关联的所有Employee查询出来
     * @param id 部门编号
     * @return Department信息，包含部门下的所有员工
     */
    Department getByIdWithEmployee(Integer id);

    /**
     * 根据部门id查询Department和部门下的所有员工信息
     * @param id 部门id
     * @return 部门和员工组成的DepartmentEmployee对象的集合
     */
    List<DepartmentEmployee> getById1(Integer id);

    /**
     * 根据DepartmentQuery中的查询参数查找Department信息
     * @param departmentQuery 查询参数封装对象
     * @return
     */
    List<Department> listByQuery(DepartmentQuery departmentQuery);

    /**
     * 根据DepartmentQuery中的查询参数查找Department信息
     * @param departmentQuery 查询参数封装对象
     * @return
     */
    List<Department> listByQuery1(DepartmentQuery departmentQuery);

    /**
     * 根据DepartmentQuery中的查询参数查找Department信息
     * @param departmentQuery 查询参数封装对象
     * @return
     */
    List<Department> listByQuery2(DepartmentQuery departmentQuery);

    /**
     * 更新Department信息
     * @param department Department对象
     */
    void update(Department department);

    /**
     * 批量插入Department信息
     * @param departmentList Department对象集合
     */
    void batchSave(List<Department> departmentList);

    /**
     * 根据id数组批量删除Department信息
     * @param ids 部门编号组成的数组
     */
    void batchRemove(Integer[] ids);

    /**
     * 根据分页对象Pager分页查询Department信息
     * @param pager Pager对象
     * @return
     */
    List<Department> listByPager(Pager pager);

    /**
     * 插入Department信息，并获取生成的主键值
     * @param department department对象信息
     */
    void saveGetKey(Department department);

}
