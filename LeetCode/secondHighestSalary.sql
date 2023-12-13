---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Medium
---------------------------------------------------------------

/*
    (RunTime = 338ms)
    select ifnull((select distinct salary 
                from Employee order by 
                salary desc limit 1
                offset 1),null)
                as SecondHighestSalary;
*/

-- Runtime = 651 ms
SELECT MAX(salary) as SecondHighestSalary
FROM Employee
WHERE salary NOT IN (
    SELECT MAX(salary)
    FROM Employee
);