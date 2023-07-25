SELECT *
FROM travelers
WHERE NOT(country = 'USA' OR country = 'Canada' OR country = 'Mexico')