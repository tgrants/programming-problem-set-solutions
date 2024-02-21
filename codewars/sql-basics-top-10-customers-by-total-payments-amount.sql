-- SQL Basics: Top 10 customers by total payments amount
-- PostgreSQL 9.6

SELECT
	customer.customer_id,
	customer.email,
	COUNT(*) AS payments_count,
	SUM(payment.amount)::float AS total_amount
FROM payment
INNER JOIN customer ON customer.customer_id = payment.customer_id
GROUP BY customer.customer_id
ORDER BY SUM(payment.amount) DESC
LIMIT 10;