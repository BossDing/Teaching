/*
Navicat MySQL Data Transfer

Source Server         : Mysql
Source Server Version : 50717
Source Host           : localhost:3306
Source Database       : ssm_case

Target Server Type    : MYSQL
Target Server Version : 50717
File Encoding         : 65001

Date: 2017-12-12 14:10:39
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for t_cash
-- ----------------------------
DROP TABLE IF EXISTS `t_cash`;
CREATE TABLE `t_cash` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `money` decimal(10,2) DEFAULT NULL,
  `cash_time` datetime DEFAULT NULL,
  `cash_customer` varchar(100) DEFAULT NULL,
  `cash_type` bigint(20) DEFAULT NULL COMMENT '收支类型编号，t_cash_type的主键',
  `pay_type` bigint(20) DEFAULT NULL COMMENT '支付方式编号，t_pay_type的主键',
  `user_id` bigint(20) DEFAULT NULL COMMENT '用户编号，t_user的主键',
  `create_time` datetime DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of t_cash
-- ----------------------------
INSERT INTO `t_cash` VALUES ('1', '1000.00', '2017-12-08 08:55:05', 'A客户', '3', '2', '1', '2017-12-08 08:55:35');
INSERT INTO `t_cash` VALUES ('2', '500.00', '2017-12-08 08:55:44', 'B客户', '6', '4', '1', '2017-12-08 08:56:16');
INSERT INTO `t_cash` VALUES ('3', '200.00', '2017-12-11 10:35:38', 'B公司', '4', '3', '1', '2017-12-11 09:45:31');
INSERT INTO `t_cash` VALUES ('4', '2000.00', '2017-12-11 09:47:57', '**活动管理有限公司', '7', '2', '1', '2017-12-11 09:48:01');

-- ----------------------------
-- Table structure for t_cash_type
-- ----------------------------
DROP TABLE IF EXISTS `t_cash_type`;
CREATE TABLE `t_cash_type` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `pid` bigint(20) DEFAULT NULL,
  `type` varchar(10) NOT NULL,
  `description` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of t_cash_type
-- ----------------------------
INSERT INTO `t_cash_type` VALUES ('1', '0', '收入', null);
INSERT INTO `t_cash_type` VALUES ('2', '0', '支出', null);
INSERT INTO `t_cash_type` VALUES ('3', '1', '项目收入', null);
INSERT INTO `t_cash_type` VALUES ('4', '1', '稿费', null);
INSERT INTO `t_cash_type` VALUES ('5', '2', '餐饮支出', null);
INSERT INTO `t_cash_type` VALUES ('6', '2', '旅游支出', null);
INSERT INTO `t_cash_type` VALUES ('7', '2', '活动支出', null);

-- ----------------------------
-- Table structure for t_pay_type
-- ----------------------------
DROP TABLE IF EXISTS `t_pay_type`;
CREATE TABLE `t_pay_type` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `type` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of t_pay_type
-- ----------------------------
INSERT INTO `t_pay_type` VALUES ('1', '现金');
INSERT INTO `t_pay_type` VALUES ('2', '微信支付');
INSERT INTO `t_pay_type` VALUES ('3', '支付宝支付');
INSERT INTO `t_pay_type` VALUES ('4', '银行转账');

-- ----------------------------
-- Table structure for t_user
-- ----------------------------
DROP TABLE IF EXISTS `t_user`;
CREATE TABLE `t_user` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `phone` char(11) NOT NULL,
  `pwd` varchar(100) NOT NULL,
  `realname` varchar(10) NOT NULL,
  `reg_time` datetime DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of t_user
-- ----------------------------
INSERT INTO `t_user` VALUES ('1', '18888888888', '4QrcOUm6Wau+VuBX8g+IPg==', 'wang', '2017-12-07 11:43:46');
INSERT INTO `t_user` VALUES ('2', '18888888889', '4QrcOUm6Wau+VuBX8g+IPg==', 'zhang', '2017-12-07 11:43:46');
