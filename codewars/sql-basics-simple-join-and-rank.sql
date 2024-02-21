-- SQL Basics: Simple JOIN and RANK
-- PostgreSQL 9.6

SELECT
	people.id,
	people.name,
	COUNT(*) as sale_count,
	RANK() OVER (ORDER BY COUNT(*) DESC) AS sale_rank
FROM people
INNER JOIN sales ON people.id = sales.people_id
GROUP BY sales.people_id, people.id, people.name
ORDER BY COUNT(*) DESC;

-- Scuffed solution