SELECT * FROM departments
WHERE EXISTS (SELECT price FROM sales WHERE departments.id = department_id AND price >= 98);