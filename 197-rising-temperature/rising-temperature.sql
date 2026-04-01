# Write your MySQL query statement below
select id from Weather a where a.temperature > (select temperature from Weather b where Date_Sub(a.recordDate, Interval 1 day) = b.recordDate) 