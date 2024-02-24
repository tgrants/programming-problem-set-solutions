-- SQL Basics: Simple UNION ALL
-- PostgreSQL 9.6

SELECT 'EU' AS location, * FROM eusales
WHERE price > 50
UNION ALL
SELECT 'US' AS location, * FROM ussales
WHERE price > 50
ORDER BY location DESC, id;