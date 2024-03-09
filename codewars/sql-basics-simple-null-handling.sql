-- SQL Basics: Simple NULL handling
-- https://www.codewars.com/kata/5811315e04adbbdb5000050e
-- PostgreSQL 9.6

SELECT
	id,
	COALESCE(NULLIF(name, ''), '[product name not found]') as name,
	price,
	COALESCE(NULLIF(card_name, ''), '[card name not found]') as card_name,
	card_number,
	transaction_date
FROM eusales
WHERE price > 50;
