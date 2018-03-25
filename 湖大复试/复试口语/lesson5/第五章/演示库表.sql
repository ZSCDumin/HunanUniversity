DROP TABLE Student;
CREATE TABLE Student
        (Sno       CHAR(5)  , 
         Sname     VARCHAR(10)  ,             
         Ssex      CHAR(2) ,
         Sage      INT,
         Sdept    CHAR(2)); 
INSERT INTO Student VALUES('95001','李勇','男',20,'CS');
INSERT INTO Student VALUES('95002','刘晨','女',19,'IS');
INSERT INTO Student VALUES('95003','王敏','女',18,'MA');
INSERT INTO Student VALUES('95004','张立','男',17,'IS');
INSERT INTO Student VALUES('95005','刘敏捷','男',22,'MA');

DROP TABLE Course;
CREATE TABLE Course
        (Cno       CHAR(1)  , 
         Cname     VARCHAR(20) ,             
         Cpno      CHAR(2) ,
         Ccredit   INT);

INSERT INTO Course VALUES('1','数据库'   ,'5',4);
INSERT INTO Course VALUES('2','数学'     ,null ,2);
INSERT INTO Course VALUES('3','信息系统' ,'1',4);
INSERT INTO Course VALUES('4','操作系统' ,'6',3);
INSERT INTO Course VALUES('5','数据结构' ,'7',4);
INSERT INTO Course VALUES('6','数据处理' ,null  ,2);
INSERT INTO Course VALUES('7','C语言程序设计','6',4);
INSERT INTO Course VALUES('8','面向对象_C++','7',4);
INSERT INTO Course VALUES('9','面向对象与C++','7',4);
INSERT INTO Course VALUES('9','面向对象基于C++','7',4);
DROP TABLE SC;
CREATE TABLE SC
        (Sno       CHAR(5) , 
         Cno      CHAR(1) ,             
         Grade   INT,
         primary key (Sno,Cno) );

INSERT INTO SC VALUES('95001','1',92);
INSERT INTO SC VALUES('95001','2',85);
INSERT INTO SC VALUES('95001','3',88);
INSERT INTO SC VALUES('95002','2',90);
INSERT INTO SC VALUES('95002','3',80);

DROP TABLE Teacher;
CREATE TABLE Teacher
        (Tno       CHAR(5)  , 
         Tname     VARCHAR(10)  ,
         Ssex      CHAR(2) ,             
         Tage      INT,
         Tdept    CHAR(2)); 
INSERT INTO Teacher VALUES('20001','张三','男',40,'CS');
INSERT INTO Teacher VALUES('20002','李四','女',59,'IS');
INSERT INTO Teacher VALUES('20003','王五','女',38,'MA');
INSERT INTO Teacher VALUES('20004','张立','女',48,'MA');