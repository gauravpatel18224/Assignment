create database flipkart;
use flipkart;
create table customer(
	customerID int primary key auto_increment,
    customerName varchar(30),
    mobile varchar(30),
    email varchar(30),
    username varchar(30),
    pass varchar(30),
    address varchar(30)
);
create table category(
	categoryID int primary key auto_increment,
    categoryName varchar(30),
    categoryImage varchar(30)

);
create table product(
	productID int auto_increment,
    productName varchar(30),
    productImage varchar(30),
    productPrice float4,
    catID int,
    productDescription varchar(100),
    primary key (productID),
    foreign key (catID) references category(categoryID)
);
create table ordertbl(
	orderID int auto_increment,
    customerID int,
    productID int,
    orderDate dateTime,
    total int,
    primary key (orderID),
    foreign key (customerID) references customer(customerID),
    foreign key (productID) references product(productID)
);
insert into customer
(customerName,mobile,email,username,pass,address)
values
('moinuddin','9586939494','moin@g123gmail.com','moin$123','231023','Dholka'),
('sakib','75155731092','sakib@555gmail.com','saki$333','s$1221','Khambhat'),
('sahnavaz','93278612232','sahnvaz@9990gmail.com','sahu$786','sahn&999','Dholka');

insert into category(categoryName,categoryImage) values
 ('Electronics','image1.jpg'),('clothes','image2.jpg'),('footware','image3.jpg'),('grocessory','image4.jpg');

select * from category;
insert into product
(productName,productImage,productPrice,catID,productDescription)
values('mobile','c://image2.jpg',62220.0,1,'real me.....'),
('T-shirt','c://image1.jpg',1000,2,'new arrivals...');
select *from product;
insert into customer
(customerName,email,username,pass,address)values
('gulam','gulam@gmaol.com','gulam@123','gullu$786','dholka'),
('ahemad','ahemad786@gmail.com','ahemad@155','amd$786','Khambhat');
select *from customer;
select *from customer where customerID=1;
select mobile from customer where customerID=2;
select * from product;
select  productName from product where productPrice <=2000;


select email from customer where customerId >=4;
update customer
set customerName='mulla'
where customerID=9;
delete from customer
where customerID=7;
delete from customer
where customerID=9;
delete from customer
where customerID=7;
select * from customer;
delete from customer
where customerID=8;
select * from customer;
update customer
set customerName='moinuddin momin'
where customerID=1;
update customer
set mobile='9099070155'
where customerID <2;
update customer
set customerName='moin' 
where customerName='moinuddin momin';
select *from customer;
select *from customer;
update customer
set mobile ='9686939292'
where customerId=1;
update customer
set customerName='moinuddin' 
where customerId=1;
update customer
set mobile='931555936'
where customerId=3;
update customer
set mobile='177' 
where customerId=6;
select * from customer;
delete from customer
where customerID=6;
select * from customer;
update customer
set customerName='ahemad shaikh'
where customerId=5;
select address from customer where customerId=5;
select * from customer;
use flipkart; 
-- today;

select *from customer where customerID=1;
select address from customer where customerName='gulam';
select customerName as name,mobile as contact from customer;
select * from customer where userName='moin$123' and pass='231023';
select * from customer where customerID in(select customerID from ordertbl);
select * from product where productId in(select productID from ordertbl);
select * from category where categoryId in(select catId from product);
select * from customer where address IN ("dholka","ahemadabad""khambhat");
select * from customer;


select distinct(productName) from product;
select distinct(customerId) from ordertbl;
select distinct(address) from customer;
select distinct(catId) from product;

select * from product where productPrice between 1500 and 25000;
select * from ordertbl where customerId between 1 and 5;
select customerName from customer where customerName between 's' and 'z';
select productName,productPrice from product where productPrice between 1000 and 50000;
select * from product;

select * from customer where customerName like 's%';
select * from customer where customerName like 's%z';
select * from customer where customerName like '%v';
select * from customer where customerName like '%a%';
select * from customer where customerName like 'm__n';
select * from customer;

select * from product order by productPrice;
select productPrice from product order by productPrice desc;
select customerName from customer where address='dholka' order by customerName desc;
select customerName from customer  where address='khambhat' order by customerName ;
select upper(customerName)  from customer order by customerName asc;
-- ascending and descending means chadto utarto kram;
select * from customer;
select * from ordertbl;
select * from product;
use flipkart; 
-- today 3-2-2024

select sum(total) as mointotal from ordertbl;
select max(total) as Total from ordertbl;
select upper(customerName) from customer;
select lower(customerName) from customer;

select sum(total),customerID as Total from ordertbl group by customerID;
select count(productID),catID from product group by catID;
select count(customerID) from customer where customerName like 'm%' group by address; 

 select * from ordertbl;
-- group by sathe having no use thay vadhare 
select customerID from ordertbl 
group by customerID
having count(customerID)>1;
-- ahiya having where na jevu j chhe tema pan conditon apvani hoy chhe 
desc customer;


select customerID from ordertbl
group by customerID 
having count(customerID)<2;
-- ahiya having ma arithmetik operator no use thay where ma na  thay
select catID from product
group by catId
having (catId)>=3;
select * from category;
select * from product;
use flipkart;
select * from ordertbl;





select * from ordertbl;
desc ordertbl;
select customer.customerName,ordertbl.orderdate,ordertbl.total
from ordertbl inner join customer
on ordertbl.customerID=customer.customerID;
select address,count(address) from customer
group by address
having address='DHOLKA';
select customer.customername,product.productName
from customer inner join product inner join ordertbl

on customer.customerID=ordertbl.customerID=product.productID
group by customer.customername,product.productName;




select customerID from ordertbl
group by customerID
having (customerID)>2;
use flipkart;
select * from ordertbl;
select customerID 
from ordertbl
group by customerID 
having count(customerID)<2;

select productID,count(productID) 
from ordertbl
group by productID
 having productID=3;





select catID,count(catId) from product
 group by catId;
select * from product;
select customerId,count(customerID) as countorder from ordertbl 
group by customerID ;
select customerID,count(customerID)
from ordertbl
 group by customerId
having count(customerID)>=2;
select sum(productPrice) from product;
select *from customer
where customerID=2 and upper(customerName);
select * from customer where address in('dholka','ahemadabad','khambhat','surat');

desc category;
select  distinct(address) from customer  order by   address asc;
select * from category order by categoryID ;
update customer 
set customerName='momin moinuddin'
where customerId=1;
select * from customer;
select customerName from customer where customerId in (1,5,12,13);
use flipkart;



-- inner join 

select product.productName
from ordertbl inner join product
on ordertbl.productID=product.productID;
select product.productName
from product inner join ordertbl
on product.productID=ordertbl.productId;

select * from 
product inner join ordertbl
on product.productID=ordertbl.productID;




-- left join 

select *
from ordertbl left join product
on ordertbl.productID=product.productID;

-- right join

select *
from ordertbl right join product

on ordertbl.productID=product.productID;
use flipkart;

 delimiter //
 create procedure sp_2(in cid int ,in total_price int,in pname varchar(50),in pprice int)
 begin
 declare pid int;
 insert into product (productName,productPrice) values 
 (pname,pprice);
 set pid=(select max(productId)from product);
 insert into ordertbl(customerID,productID,orderDate,total) values
 (cid,pid,now(),total_Price);
 end
 // delimiter ;
 call sp_2(2,200,'book',200)
 delimiter //
 create procedure sum_order(in customerId int,in pid int,in orderDate datetime,in total int)
 begin
 
 insert into ordertbl(customerId,productID,orderDate,total) value
 (customerId,pid,orderDate,total);
 select count(productID) from ordertbl where productID=pid;
 end
 // delimiter ;
 
 call sum_order(1,4,now(),2899);
 
select * from category;
delimiter //
create procedure add_new(in p_name varchar(30),p_price int,c_id int,in cid int ,in pid int,in odate datetime,in total int )
begin
declare ord int;
insert into product(productName,productPrice,catID)values
(p_name,p_price,c_id);
set ord=(select max(productID) from product);
insert into ordertbl(customerId,productID,orderDate,total) values
(cid,pid,odate,total);
select productId from product
where productID=ord;
end
// delimiter ;
create table employee(
employee_no int primary key auto_increment,
name varchar(30),
job varchar(30),
hiredate date,
salary int
);
drop table empoyee;
use flipkart;
insert into employee(name,job,hiredate,salary) values 
('moin','tops',now(),25000),
('sahnavaz','amazon',now(),33000);
select * from employee;
create table employee_backup
(employee_no int,name varchar(20),jon varchar(20),hiredate date,salary int);

delimiter //
create trigger backupEntry
before delete on employee
for each row
begin 
insert into employee_backup
values(old.employee_no,old.name,old.job,old.hiredate,old.salary);
end
// delimiter ;

select * from employee;
select * from employee_backup;
delete from employee 
where employee_no=1;











 
 
 
 
 
 
 
 
 
 


















 
 




create database flipkart;
use flipkart;
create table customer(
	customerID int primary key auto_increment,
    customerName varchar(30),
    mobile varchar(30),
    email varchar(30),
    username varchar(30),
    pass varchar(30),
    address varchar(30)
);
create table category(
	categoryID int primary key auto_increment,
    categoryName varchar(30),
    categoryImage varchar(30)

);
create table product(
	productID int auto_increment,
    productName varchar(30),
    productImage varchar(30),
    productPrice float4,
    catID int,
    productDescription varchar(100),
    primary key (productID),
    foreign key (catID) references category(categoryID)
);
create table ordertbl(
	orderID int auto_increment,
    customerID int,
    productID int,
    orderDate dateTime,
    total int,
    primary key (orderID),
    foreign key (customerID) references customer(customerID),
    foreign key (productID) references product(productID)
);
insert into customer
(customerName,mobile,email,username,pass,address)
values
('moinuddin','9586939494','moin@g123gmail.com','moin$123','231023','Dholka'),
('sakib','75155731092','sakib@555gmail.com','saki$333','s$1221','Khambhat'),
('sahnavaz','93278612232','sahnvaz@9990gmail.com','sahu$786','sahn&999','Dholka');

insert into category(categoryName,categoryImage) values
 ('Electronics','image1.jpg'),('clothes','image2.jpg'),('footware','image3.jpg'),('grocessory','image4.jpg');

select * from category;
insert into product
(productName,productImage,productPrice,catID,productDescription)
values('mobile','c://image2.jpg',62220.0,1,'real me.....'),
('T-shirt','c://image1.jpg',1000,2,'new arrivals...');
select *from product;
insert into customer
(customerName,email,username,pass,address)values
('gulam','gulam@gmaol.com','gulam@123','gullu$786','dholka'),
('ahemad','ahemad786@gmail.com','ahemad@155','amd$786','Khambhat');
select *from customer;
select *from customer where customerID=1;
select mobile from customer where customerID=2;
select * from product;
select  productName from product where productPrice <=2000;


select email from customer where customerId >=4;
update customer
set customerName='mulla'
where customerID=9;
delete from customer
where customerID=7;
delete from customer
where customerID=9;
delete from customer
where customerID=7;
select * from customer;
delete from customer
where customerID=8;
select * from customer;
update customer
set customerName='moinuddin momin'
where customerID=1;
update customer
set mobile='9099070155'
where customerID <2;
update customer
set customerName='moin' 
where customerName='moinuddin momin';
select *from customer;
select *from customer;
update customer
set mobile ='9686939292'
where customerId=1;
update customer
set customerName='moinuddin' 
where customerId=1;
update customer
set mobile='931555936'
where customerId=3;
update customer
set mobile='177' 
where customerId=6;
select * from customer;
delete from customer
where customerID=6;
select * from customer;
update customer
set customerName='ahemad shaikh'
where customerId=5;
select address from customer where customerId=5;
select * from customer;
use flipkart; 
-- today;

select *from customer where customerID=1;
select address from customer where customerName='gulam';
select customerName as name,mobile as contact from customer;
select * from customer where userName='moin$123' and pass='231023';
select * from customer where customerID in(select customerID from ordertbl);
select * from product where productId in(select productID from ordertbl);
select * from category where categoryId in(select catId from product);
select * from customer where address IN ("dholka","ahemadabad""khambhat");
select * from customer;


select distinct(productName) from product;
select distinct(customerId) from ordertbl;
select distinct(address) from customer;
select distinct(catId) from product;

select * from product where productPrice between 1500 and 25000;
select * from ordertbl where customerId between 1 and 5;
select customerName from customer where customerName between 's' and 'z';
select productName,productPrice from product where productPrice between 1000 and 50000;
select * from product;

select * from customer where customerName like 's%';
select * from customer where customerName like 's%z';
select * from customer where customerName like '%v';
select * from customer where customerName like '%a%';
select * from customer where customerName like 'm__n';
select * from customer;

select * from product order by productPrice;
select productPrice from product order by productPrice desc;
select customerName from customer where address='dholka' order by customerName desc;
select customerName from customer  where address='khambhat' order by customerName ;
select upper(customerName)  from customer order by customerName asc;
-- ascending and descending means chadto utarto kram;
select * from customer;
select * from ordertbl;
select * from product;
use flipkart; 
-- today 3-2-2024

select sum(total) as mointotal from ordertbl;
select max(total) as Total from ordertbl;
select upper(customerName) from customer;
select lower(customerName) from customer;

select sum(total),customerID as Total from ordertbl group by customerID;
select count(productID),catID from product group by catID;
select count(customerID) from customer where customerName like 'm%' group by address; 

 select * from ordertbl;
-- group by sathe having no use thay vadhare 
select customerID from ordertbl 
group by customerID
having count(customerID)>1;
-- ahiya having where na jevu j chhe tema pan conditon apvani hoy chhe 
desc customer;


select customerID from ordertbl
group by customerID 
having count(customerID)<2;
-- ahiya having ma arithmetik operator no use thay where ma na  thay
select catID from product
group by catId
having (catId)>=3;
select * from category;
select * from product;
use flipkart;
select * from ordertbl;





select * from ordertbl;
desc ordertbl;
select customer.customerName,ordertbl.orderdate,ordertbl.total
from ordertbl inner join customer
on ordertbl.customerID=customer.customerID;
select address,count(address) from customer
group by address
having address='DHOLKA';
select customer.customername,product.productName
from customer inner join product inner join ordertbl

on customer.customerID=ordertbl.customerID=product.productID
group by customer.customername,product.productName;




select customerID from ordertbl
group by customerID
having (customerID)>2;
use flipkart;
select * from ordertbl;
select customerID 
from ordertbl
group by customerID 
having count(customerID)<2;

select productID,count(productID) 
from ordertbl
group by productID
 having productID=3;





select catID,count(catId) from product
 group by catId;
select * from product;
select customerId,count(customerID) as countorder from ordertbl 
group by customerID ;
select customerID,count(customerID)
from ordertbl
 group by customerId
having count(customerID)>=2;
select sum(productPrice) from product;
select *from customer
where customerID=2 and upper(customerName);
select * from customer where address in('dholka','ahemadabad','khambhat','surat');

desc category;
select  distinct(address) from customer  order by   address asc;
select * from category order by categoryID ;
update customer 
set customerName='momin moinuddin'
where customerId=1;
select * from customer;
select customerName from customer where customerId in (1,5,12,13);
use flipkart;



-- inner join 

select product.productName
from ordertbl inner join product
on ordertbl.productID=product.productID;
select product.productName
from product inner join ordertbl
on product.productID=ordertbl.productId;

select * from 
product inner join ordertbl
on product.productID=ordertbl.productID;




-- left join 

select *
from ordertbl left join product
on ordertbl.productID=product.productID;

-- right join

select *
from ordertbl right join product

on ordertbl.productID=product.productID;
use flipkart;

 delimiter //
 create procedure sp_2(in cid int ,in total_price int,in pname varchar(50),in pprice int)
 begin
 declare pid int;
 insert into product (productName,productPrice) values 
 (pname,pprice);
 set pid=(select max(productId)from product);
 insert into ordertbl(customerID,productID,orderDate,total) values
 (cid,pid,now(),total_Price);
 end
 // delimiter ;
 call sp_2(2,200,'book',200)
 delimiter //
 create procedure sum_order(in customerId int,in pid int,in orderDate datetime,in total int)
 begin
 
 insert into ordertbl(customerId,productID,orderDate,total) value
 (customerId,pid,orderDate,total);
 select count(productID) from ordertbl where productID=pid;
 end
 // delimiter ;
 
 call sum_order(1,4,now(),2899);
 
select * from category;
delimiter //
create procedure add_new(in p_name varchar(30),p_price int,c_id int,in cid int ,in pid int,in odate datetime,in total int )
begin
declare ord int;
insert into product(productName,productPrice,catID)values
(p_name,p_price,c_id);
set ord=(select max(productID) from product);
insert into ordertbl(customerId,productID,orderDate,total) values
(cid,pid,odate,total);
select productId from product
where productID=ord;
end
// delimiter ;
create table employee(
employee_no int primary key auto_increment,
name varchar(30),
job varchar(30),
hiredate date,
salary int
);
drop table empoyee;
use flipkart;
insert into employee(name,job,hiredate,salary) values 
('moin','tops',now(),25000),
('sahnavaz','amazon',now(),33000);
select * from employee;
create table employee_backup
(employee_no int,name varchar(20),jon varchar(20),hiredate date,salary int);

delimiter //
create trigger backupEntry
before delete on employee
for each row
begin 
insert into employee_backup
values(old.employee_no,old.name,old.job,old.hiredate,old.salary);
end
// delimiter ;


// delimiter
use flipkart 
drop table customera;
drop table salseperson;



select * from employee;
select * from employee_backup;
delete from employee 
where employee_no=1;
select * from customer;

create database saller_And_customer;


use saller_And_customer;


 
 drop table customera;
 
 create table salseperson
 (SNO  int primary key,SNAME varchar(30),CITY VARCHAR(20),COMM float);
 insert into salseperson
 (SNO,SNAME,CITY,COMM)
 values
 (1001,'Peet','London',.12),
 (1002,'Serres','San Jose',.13),
 (1004,'Motika','London',.11),
 (1007,'Rafkin','Barcelona',.15),
 (1003,'Axeiron','New York',.1);
 select * from salseperson;
 create table customera
 (CNM int primary key,
 CNAME VARCHAR(30),
 CITY VARCHAR(20),
 RATING integer,
 SNO int,
 foreign key(SNO) references salseperson(SNO));
 
 
 insert into customera
 (CNM,CNAME,CITY,RATING,SNO)
 values
 (201,'Hoffman','London',100,1001),
 (202,'Giovanne','Roe',200,1003),
 (203,'Liu','San Joss',300,1002),
 (204,'Grass','Barcelona',100,1002),
 (206,'Clemens','London',300,1007),
 (207,'Pereira','Roe',100,1004);
 
 
--  12.Retrieve the below data from above table
select * from salseperson;
select * from customera;

-- 13.All orders more then 100,
select * from customera
where rating >100;

-- 14.Names and cities of all salespeople in London with commission above 0.12

select sname from salseperson
where city='london' and comm>.12;


-- 15.All salespeople either in Barcelona or in London
select * from salseperson
where city='barcelona' or city='london';

-- 16.All salespeople with commission between 0.10 and 0.12. (Boundary
-- valuesshould be excluded)
select * from salseperson
where comm between .10 and .12;

-- 17.All customers excluding those with rating <= 100 unless they are located
-- inRome

select * from customera
where rating<=100 and city='rome';





 
create database employee;
 use employee;
 create table Employee
 (Employee_ID int primary key auto_increment,
 First_Name varchar(20),
 Last_Name varchar(40),
 Salary int,
 Joining_Date datetime,
 Department varchar(30)
 );
 
 select * from Employee;
 create table Incentive
 (Employee_ID int,
 Incentive_Date date,
 Incentive_amount integer,
 foreign key(Employee_ID) references Employee (Employee_ID)
 );
 insert into employee(First_Name,Last_Name,Salary,Joining_Date,Department)
 values
 ('john','abraham',1000000,'13-02-01 5:33:23','Banking');
 insert into employee(First_Name,Last_Name,Salary,Joining_Date,Department)
 values
 ('michael','clark',800000,'13-01-01 12:00:00 AM','Insurance'),
 ('Roy','Thomas',700000,'13-02-01 12:00:00 AM','Banking'),
 ('Tom','Jose',600000,'13-02-01 12:00:00 AM','Insurance'),
 ('Jerry','Pinto',650000,'13-02-01 12:00:00 AM','Insurance'),
 ('Philip','mathew',75000,'13-01-01 12:00:00 AM','Service'),
 ('Tastname2','Lname%',600000,'13-02-01 12:00:00 AM','Insuramce');

 select * from employee;
 insert into Incentive
 (Employee_ID,Incentive_Date,Incentive_amount) values 
 (1,'13-02-01',5000),
 (2,'13-02-01',3000),
 (3,'13-02-01',4000),
 (1,'13-01-01',4500),
 (2,'13-01-01',3500);
 select * from Incentive;
 
 -- . Get First_Name from employee table using Tom name “Employee Name”.
 select First_Name from employee
 where First_Name='tom';
 
 
 -- Get FIRST_NAME, Joining Date, and Salary from employee table.
 
 select First_Name,Joining_Date,Salary from employee;
 
 
--  Get all employee details from the employee table order by First_Name

select * from employee
 order by  First_Name asc;
 
 select * from employee
 order by First_Name desc;
 
--  Get employee details from employee table whose first name contains ‘J’

select * from employee
where First_Name like  'j%';


-- Get department wise maximum salary from employee table order by

select Department,max(Salary) from employee
order by Department asc;

select Department,max(Salary) from employee
order by Department desc;

-- salaryascending?
select salary from employee
order by salary asc;

-- Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than
-- 3000

select employee.First_Name,incentive.Incentive_amount
from employee inner join incentive
on employee.Employee_ID=incentive.Employee_ID
where Incentive_amount>3000;

-- Create After Insert trigger on Employee table which insert records in
-- viewtable

create table viewtable(Employee_ID int,
Fisrt_Name varchar(20),
Last_Name varchar(20),
Salary int,Joining_Date Datetime,
Department varchar(20));
use flipkart;
delimiter //
create trigger Store_Data
before insert on employee
for each row
begin
insert into viewtable
values(Emlployee_ID,Fisrt_Name,Last_Name,Salary,Joining_Date,Department);
end
//delimiter ;




insert into employee(First_Name,Last_Name,Salary,Joining_Date,Department)
values ('abdul vahab','shaikh',21000,now(),clark);
select * from employee;
select * from viewtable;
drop table employee;
drop table employee_backup;



