# Write your MySQL query statement below
Select name, bonus FROM Employee e LEFT JOIN Bonus b on e.empId = b.empId WHERE b.bonus < 1000 OR b.bonus is NULL;
