SELECT
	ROUND(long_w, 4)
FROM
	station
WHERE
	lat_n < 137.2345
ORDER BY lat_n DESC
LIMIT 1;
