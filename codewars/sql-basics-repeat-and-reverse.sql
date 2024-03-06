-- SQL Basics: Repeat and Reverse
-- https://www.codewars.com/kata/59414360f5c3947364000070
-- PostgreSQL 13.0

SELECT
	REPEAT(name, 3) AS name,
	REVERSE(characteristics) AS characteristics
FROM monsters;
