-- Last updated: 10/4/2025, 5:46:00 PM
SELECT name AS Employee
FROM Employee
WHERE salary > (
    SELECT salary
    FROM Employee AS manager
    WHERE manager.id = Employee.managerId
);
