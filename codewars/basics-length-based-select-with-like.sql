-- BASICS: Length based SELECT with LIKE
-- https://www.codewars.com/kata/5a8d94d3ba1bb569e5000198
-- 7kyu, PostgreSQL 13.0

SELECT first_name, last_name FROM names
WHERE first_name LIKE '______%';
