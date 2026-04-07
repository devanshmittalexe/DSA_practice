# Write your MySQL query statement belowc
select name from SalesPerson where sales_id not in (select distinct o.sales_id from Orders o join Company c on c.com_id=o.com_id where c.name="RED")