create database d_security default charset utf8;

use d_security;

create table t_user
(
	id bigint auto_increment
		primary key,
	phone varchar(11) null,
	password varchar(100) null
);

create table t_role
(
	id bigint auto_increment
		primary key,
	title varchar(20) null
);


create table t_permission
(
	id bigint auto_increment
		primary key,
	title varchar(20) null,
	url varchar(200) null
);

create table t_user_role
(
	id bigint auto_increment
		primary key,
	user_id bigint null,
	role_id bigint null
);

create table t_role_permission
(
	id bigint auto_increment
		primary key,
	permission_id bigint null,
	role_id bigint null
);
