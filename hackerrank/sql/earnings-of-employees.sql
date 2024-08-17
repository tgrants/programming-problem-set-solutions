SELECT * FROM (
	SELECT salary * months AS total_earnings, COUNT(salary * months) FROM employee
	GROUP BY total_earnings
	ORDER BY total_earnings DESC
) AS t
LIMIT 1;
