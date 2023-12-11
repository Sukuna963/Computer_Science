---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Easy
---------------------------------------------------------------

/*
    (RunTime = 544ms)
    SELECT firstName, lastName, city, state FROM Person LEFT JOIN Address USING(personId)
*/


-- RunTime = 747 ms
SELECT Person.firstName, Person.lastName, Address.city, Address.state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;