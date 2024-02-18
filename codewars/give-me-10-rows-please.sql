DO $$ 
DECLARE 
	counter INTEGER := 0;
BEGIN 
	WHILE counter < 10 LOOP 
		counter := counter + 1;
		INSERT INTO sample_table (a, b)
		VALUES (0, '-');
	END LOOP;
END;
$$;

SELECT a, b FROM sample_table
ORDER BY a = 0 NULLS LAST, a
LIMIT 10;

-- Alt: use generate_series(1,10)