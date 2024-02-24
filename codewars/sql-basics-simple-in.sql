-- SQL Basics: Simple IN
-- PostgreSQL 9.6

SELECT id, name FROM departments
WHERE id IN (SELECT department_id FROM sales WHERE price > 98);