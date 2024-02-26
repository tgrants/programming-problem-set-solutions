-- The Most Popular Product
-- SQL

SELECT
	product_id,
	product_name,
	count_orders
FROM (
	SELECT
		product_id,
		product_name,
		COUNT(*) AS count_orders,
		RANK() OVER (ORDER BY COUNT(*) DESC) AS rank
	FROM orders
	JOIN products ON orders.product_id = products.id
	GROUP BY product_id, products.product_name
) AS ranked
WHERE rank = 1
ORDER BY product_id DESC

-- Alt: fetch first row with ties