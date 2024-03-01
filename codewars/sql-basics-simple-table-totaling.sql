-- SQL Basics: Simple table totaling.
-- https://www.codewars.com/kata/5809575e166583acfa000083
-- PostgreSQL 9.6

SELECT
	RANK() OVER (ORDER BY SUM(points) DESC) AS rank,
	COALESCE(NULLIF(clan, ''), '[no clan specified]') as clan,
	COUNT(*) AS total_people,
	SUM(points) AS total_points
FROM people
GROUP BY clan