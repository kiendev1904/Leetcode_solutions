/* Write your T-SQL query statement below */
SELECT U.unique_id, T.name
FROM Employees T 
LEFT JOIN EmployeeUNI U 
ON T.id = U.id
