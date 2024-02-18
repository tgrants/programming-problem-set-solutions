SELECT capital FROM countries
WHERE continent LIKE 'Afri_a' AND country LIKE 'E%'
ORDER BY capital ASC
LIMIT 3;