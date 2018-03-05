create database if not exists d_mybatis default charset utf8 collate utf8_general_ci;

create table t_department (
  id int primary key auto_increment,
  title varchar(20) not null,
  des varchar(200)
);


create table t_department_detail (
  id int,
  create_by varchar(20),
  create_time datetime
);

create table t_employee (
  id int primary key auto_increment,
  phone varchar(11) not null,
  name varchar(10) not null,
  department_id int
);