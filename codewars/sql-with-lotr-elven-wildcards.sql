-- SQL with LOTR: Elven Wildcards
-- https://www.codewars.com/kata/5ad90fb688a0b74111000055
-- PostgreSQL 13.0

SELECT CONCAT_WS(' ', INITCAP(firstname), INITCAP(lastname)) AS shortlist
FROM Elves
WHERE firstname LIKE '%tegil%' OR lastname LIKE '%astar%';
