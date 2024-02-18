SELECT race, COUNT(race) AS count FROM demographics
GROUP BY race
ORDER BY COUNT(race) DESC;