-- SQL Basics - Monsters using CASE
-- https://www.codewars.com/kata/593ef0e98b90525e090000b9
-- 6kyu, PostgreSQL 13.0

SELECT
	*,
	CASE
		WHEN (heads > arms) OR (tails > legs) THEN 'BEAST'
		ELSE 'WEIRDO'
	END AS species
FROM top_half
JOIN bottom_half ON top_half.id = bottom_half.id
ORDER BY species;
