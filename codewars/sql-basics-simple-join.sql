SELECT *, companies.name AS company_name FROM companies
INNER JOIN products ON products.company_id = companies.id;