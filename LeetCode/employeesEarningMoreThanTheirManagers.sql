---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Easy
---------------------------------------------------------------

/* RunTime = 498ms
    select Emp.name as Employee
    from Employee Emp,Employee Mgr
    where Mgr.id=Emp.managerId and Mgr.salary<Emp.salary;
*/

-- RunTime = 725ms
SELECT e.name as Employee
FROM Employee e
JOIN Employee m ON e.managerId = m.id
WHERE e.salary > m.salary