SELECT people.id, people.name, COUNT(toys.id) AS toy_count FROM people
INNER JOIN toys ON people_id = people.id
GROUP BY people.id;

-- Alt: SELECT people.*, ...