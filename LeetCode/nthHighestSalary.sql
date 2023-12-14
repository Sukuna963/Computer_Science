---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Medium
---------------------------------------------------------------

/* RunTime = 493ms
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N = N-1;
  RETURN (
      SELECT DISTINCT(salary) from Employee order by salary DESC
      LIMIT 1 OFFSET N
      
  );
END
*/

-- RunTime = 621ms
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    SET N = N-1;
  	RETURN (
    	SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT N, 1
  	);
END