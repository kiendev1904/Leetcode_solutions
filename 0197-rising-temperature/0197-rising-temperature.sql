/* Write your T-SQL query statement below */
SELECT current_day.id
FROM Weather AS current_day
JOIN Weather AS yesterday
ON DATEDIFF(day,yesterday.recordDate, current_day.recordDate) = 1
WHERE current_day.temperature > yesterday.temperature;
