SELECT EMU.unique_id, EM.name
    FROM Employees AS EM
    LEFT JOIN EmployeeUNI AS EMU
    ON EM.id = EMU.id
    ORDER BY EM.name ASC;
