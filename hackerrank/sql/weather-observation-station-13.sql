SELECT ROUND(SUM(lat_n), 4)
FROM station
WHERE lat_n > 38.788 AND lat_n < 137.2345;
