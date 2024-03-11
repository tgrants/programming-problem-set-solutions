-- SQL Basics: Maths with String Manipulations
-- https://www.codewars.com/kata/594901ba44645fd7bd00005f
-- 7kyu, PostgreSQL 13.0

SELECT BIT_LENGTH(name) + LENGTH(race) AS calculation FROM demographics;
