/* Write your T-SQL query statement below */
SELECT E.name, B.bonus
FROM Employee AS E
LEFT JOIN Bonus AS B
ON E.empId = B.empId
WHERE E.empId NOT IN( SELECT empId
                    FROM Bonus
                    WHERE bonus >= 1000 ) 