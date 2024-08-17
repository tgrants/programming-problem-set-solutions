SELECT
	ROUND(lat_n, 4)
FROM
	station
WHERE
	lat_n > 38.778
ORDER BY lat_n ASC
LIMIT 1;
