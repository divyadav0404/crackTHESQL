--SQL Schema

/* Create table If Not Exists Employee (id int, salary int)
Truncate table Employee
insert into Employee (id, salary) values ('1', '100')
insert into Employee (id, salary) values ('2', '200')
insert into Employee (id, salary) values ('3', '300') */

--SQL query
select (
    select distinct salary 
    from Employee 
    order by salary desc 
    limit 1 offset 1
) as SecondHighestSalary --good questions for sql interviews.
