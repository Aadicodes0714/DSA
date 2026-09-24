# Write your MySQL query 
select email
from person 
group by email
having COUNT(*)>1;
