package com.gs.mybatis;

import com.gs.bean.*;
import com.gs.dao.DepartmentDAO;
import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

public class MyBatisXML {

    public static void main(String[] args) throws IOException {
        // 读取mybatis.xml配置文件
        InputStream inputStream = Resources.getResourceAsStream("mybatis.xml");
        // 由SqlSessionFactoryBuilder和mybatis.xml配置文件获取SqlSessionFactory工厂
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);

        // 由sqlSessionFactory打开连接获取SqlSession
        SqlSession sqlSession = sqlSessionFactory.openSession();

        // 由SqlSession获取映射器接口DepartmentDAO
        DepartmentDAO departmentDAO = sqlSession.getMapper(DepartmentDAO.class);
        // 映射器接口调用方法，执行指定的SQL语句
        System.out.println("DepartmentDAO.listAll");
        List<Department> departmentList = departmentDAO.listAll();
        if (departmentList != null && departmentList.size() > 0) {
            for (Department department : departmentList) {
                System.out.println(department);
            }
        }

        // 映射器接口调用getById方法
        System.out.println("DepartmentDAO.getById");
        Department department = departmentDAO.getById(1);
        System.out.println(department);
        System.out.println(department.getDepartmentDetail());

        // 映射器接口调用getByIdWithEmployee方法
        System.out.println("DepartmentDAO.getByIdWithEmployee");
        Department department1 = departmentDAO.getByIdWithEmployee(1);
        System.out.println(department1);
        List<Employee> employeeList = department1.getEmployeeList();
        if (employeeList != null && employeeList.size() > 0) {
            for (Employee employee : employeeList) {
                System.out.println(employee);
            }
        }

        // 映射器接口调用getById1方法
        System.out.println("DepartmentDAO.getById1");
        List<DepartmentEmployee> departmentEmployeeList = departmentDAO.getById1(1);
        if (departmentEmployeeList != null && departmentEmployeeList.size() > 0) {
            for (DepartmentEmployee departmentEmployee : departmentEmployeeList) {
                System.out.println(departmentEmployee);
            }
        }

        // 映射器接口调用listByQuery方法
        System.out.println("DepartmentDAO.listByQuery");
        List<Department> departmentList1 = departmentDAO.listByQuery(new DepartmentQuery("市场", null));
        if (departmentList1 != null && departmentList1.size() > 0) {
            for (Department department2 : departmentList1) {
                System.out.println(department2);
            }
        }

        // 映射器接口调用listByQuery1方法
        System.out.println("DepartmentDAO.listByQuery1");
        List<Department> departmentList2 = departmentDAO.listByQuery1(new DepartmentQuery(null, null));
        if (departmentList2 != null && departmentList2.size() > 0) {
            for (Department department2 : departmentList2) {
                System.out.println(department2);
            }
        }

        // 映射器接口调用listByQuery1方法
        System.out.println("DepartmentDAO.listByQuery2");
        List<Department> departmentList3 = departmentDAO.listByQuery2(new DepartmentQuery("市场", null));
        if (departmentList3 != null && departmentList3.size() > 0) {
            for (Department department2 : departmentList3) {
                System.out.println(department2);
            }
        }

        // 映射器接口调用update方法
        System.out.println("DepartmentDAO.update");
        departmentDAO.update(new Department(1, "测试部", null));
        sqlSession.commit();

        // 映射器调用batchSave批量插入数据
        System.out.println("DepartmentDAO.batchSave");
        List<Department> departments = new ArrayList<Department>();
        departments.add(new Department("教研部", "教研"));
        departments.add(new Department("招生部", "招生"));
        departmentDAO.batchSave(departments);
        sqlSession.commit();

        // 映射器调用batchRemove批量插入数据
        System.out.println("DepartmentDAO.batchRemove");
        departmentDAO.batchRemove(new Integer[]{10, 11});
        sqlSession.commit();

        // 映射器调用listByPager方法分页查询
        System.out.println("DepartmentDAO.listByPager");
        List<Department> departmentList4 = departmentDAO.listByPager(new Pager(1, 3));
        if (departmentList4 != null && departmentList4.size() > 0) {
            for (Department department2 : departmentList4) {
                System.out.println(department2);
            }
        }

        // 映射器调用saveGetKey方法
        System.out.println("DepartmentDAO.saveGetKey");
        Department department2 = new Department("test", "test");
        departmentDAO.saveGetKey(department2);
        System.out.println("插入数据的主键值：" + department2.getId());

    }

}
