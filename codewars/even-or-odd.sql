SELECT
	number,
	CASE
		WHEN (number % 2 = 0) THEN 'Even'
		ELSE 'Odd' 
	END is_even
FROM numbers