# Write your MySQL query statement below
select firstName, lastName, city , state from person p1 left join address a1 on p1.personId=a1.personId;