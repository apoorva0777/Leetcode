# Write your MySQL query statement below
-- select max(class) as class from (select count(*) as class from courses group by class) as class;

select class from courses group by class having count(*)>=5;