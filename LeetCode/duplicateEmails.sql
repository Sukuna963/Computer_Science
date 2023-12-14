---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Easy
---------------------------------------------------------------

/* RunTime = 486ms
    SELECT email
    FROM
    (SELECT email, COUNT(ID) as cnt
    FROM Person
    GROUP BY email
    HAVING cnt>1) as temp
*/

-- RunTime = 804ms
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;