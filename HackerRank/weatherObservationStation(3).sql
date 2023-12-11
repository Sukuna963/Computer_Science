---------------------------------------------------------------
-- Author: Leonardo Marques
-- HackerRank: Easy
---------------------------------------------------------------

SELECT DISTINCT CITY
FROM STATION
WHERE mod(ID,2) = 0
ORDER BY CITY;