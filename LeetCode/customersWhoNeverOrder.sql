---------------------------------------------------------------
-- Author: Leonardo Marques
-- leetcode: Easy
---------------------------------------------------------------


/* RunTime = 741ms
    SELECT Customers.name AS Customers FROM Customers
    WHERE Customers.id NOT IN (
    SELECT Orders.customerId FROM Orders
)
*/

-- RunTime = 1086ms
SELECT c.name as Customers
FROM Customers c
WHERE c.id NOT IN (
    SELECT customerId
    FROM Orders
);