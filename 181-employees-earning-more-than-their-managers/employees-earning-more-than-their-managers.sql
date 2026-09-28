# Write your MySQL query statement below
select e.name as employee
from employee e
join employee m      #self join property
on e.managerid=m.id
where e.salary > m.salary ;
