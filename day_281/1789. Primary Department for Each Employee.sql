SELECT e1.employee_id, e1.department_id 
FROM Employee e1
WHERE e1.primary_flag = 'Y' OR
      e1.employee_id IN
      (SELECT employee_id
      FROM Employee 
      GROUP BY employee_id
      HAVING COUNT(employee_id) = 1);