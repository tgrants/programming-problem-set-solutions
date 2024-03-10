-- SQL Basics - Position
-- https://www.codewars.com/kata/59401e0e54a655a298000040
-- 7kyu, PostgreSQL 13.0

SELECT id, name, position(',' in characteristics) AS comma FROM monsters
ORDER BY comma;
