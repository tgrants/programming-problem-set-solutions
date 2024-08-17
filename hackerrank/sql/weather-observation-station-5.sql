-- MS Sql server
SELECT TOP 1 city, LEN(city) FROM station ORDER BY LEN(city) ASC, city ASC;
SELECT TOP 1 city, LEN(city) FROM station ORDER BY LEN(city) DESC, city ASC;

-- MySQL
SELECT city, LENGTH(city) FROM station ORDER BY LENGTH(city) ASC, city ASC LIMIT 1;
SELECT city, LENGTH(city) FROM station ORDER BY LENGTH(city) DESC, city ASC LIMIT 1;
