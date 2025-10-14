/* 
SQL QUESTION: 584. Find Customer Referee
Write a solution to find all the customers that are either:
1. Referred by any customer with id != 2, OR
2. Not referred by any customer (referee_id IS NULL)
Return the result table in any order.
*/

/* -------------------- TABLE CREATION -------------------- */
CREATE TABLE IF NOT EXISTS Customer (
  id INT,
  name VARCHAR(25),
  referee_id INT
);

/* -------------------- INSERT SAMPLE DATA -------------------- */
TRUNCATE TABLE Customer;

INSERT INTO Customer (id, name, referee_id) VALUES (1, 'Will', NULL);
INSERT INTO Customer (id, name, referee_id) VALUES (2, 'Jane', NULL);
INSERT INTO Customer (id, name, referee_id) VALUES (3, 'Alex', 2);
INSERT INTO Customer (id, name, referee_id) VALUES (4, 'Bill', NULL);
INSERT INTO Customer (id, name, referee_id) VALUES (5, 'Zack', 1);
INSERT INTO Customer (id, name, referee_id) VALUES (6, 'Mark', 2);

/* -------------------- FINAL QUERY -------------------- */
-- Select names of customers who were NOT referred by customer 2
-- or have no referee (referee_id IS NULL)

SELECT name
FROM Customer
WHERE referee_id <> 2 OR referee_id IS NULL;
