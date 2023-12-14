---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Medium
---------------------------------------------------------------

/* Runtime = 386ms
SELECT	s.score,
		DENSE_RANK() OVER (ORDER BY s.score DESC) AS 'rank'
  FROM	Scores s
*/

-- RunTime = 686ms
SELECT score,
DENSE_RANK() OVER(ORDER BY score DESC) 'rank'
FROM Scores