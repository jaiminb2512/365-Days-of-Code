# Write your MySQL query statement below
SELECT et.name, bt.bonus
    FROM Employee  et
    LEFT JOIN Bonus bt
    ON et.empId  = bt.empId 
    WHERE bt.bonus < 1000 OR bt.bonus IS NULL;