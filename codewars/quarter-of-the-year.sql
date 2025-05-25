-- Quarter of the year
-- https://www.codewars.com/kata/5ce9c1000bab0b001134f5af
-- 8kyu, PostgreSQL 13.0

SELECT month, (month + 2) / 3 AS res FROM quarterof;
