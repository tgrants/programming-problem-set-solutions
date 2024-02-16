SELECT age, COUNT(people.id) AS people_count FROM people
GROUP BY age;