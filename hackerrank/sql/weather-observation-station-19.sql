SELECT ROUND(
	SQRT(
		POWER(MIN(lat_n) - MAX(lat_n), 2) +
		POWER(MAX(Long_w) - MIN(long_w), 2)
	), 4
) FROM station;
