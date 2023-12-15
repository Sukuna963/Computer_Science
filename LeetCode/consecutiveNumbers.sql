---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Medium
-- Reference: https://dev.mysql.com/doc/refman/8.0/en/with.html
-- Reference: https://www.geeksforgeeks.org/mysql-lead-and-lag-function/
---------------------------------------------------------------

/* RunTime = 682ms
    select distinct(num) as ConsecutiveNums from
    (SELECT num, LEAD(num, 1) OVER(ORDER BY id) AS ld, LAG(num, 1) OVER (ORDER BY id) AS lg
    FROM logs) a where num = ld and num = lg
*/


-- RunTime = 826 ms
WITH l1 AS (
    SELECT num,
    LAG(num, 1) OVER(ORDER BY id) t1,
    LAG(num, 2) OVER(ORDER BY id) t2
    FROM Logs
)
SELECT DISTINCT num ConsecutiveNums
FROM l1
Where num = t1 AND num = t2;