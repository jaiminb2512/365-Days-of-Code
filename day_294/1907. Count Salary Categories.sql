SELECT 
    "Low Salary" AS category,        
    SUM(IF(income < 20000, 1, 0)) AS accounts_count
FROM Accounts 
UNION ALL
SELECT 
    "Average Salary" AS category,       
    SUM(IF(income >= 20000 AND income <= 50000, 1, 0)) AS accounts_count 
FROM Accounts
UNION ALL
SELECT 
    "High Salary" AS category,        
    SUM(IF(income > 50000, 1, 0)) AS accounts_count 
FROM Accounts;
