# Write your MySQL query statement below
SELECT w2.id FROM Weather w1, Weather w2 WHERE DATE_SUB(w2.recordDate, INTERVAL 1 DAY) = w1.recordDate AND w2.temperature > w1.temperature; 
