CREATE OR REPLACE FUNCTION increment(i integer)
	RETURNS integer
	LANGUAGE plpgsql AS
$func$
BEGIN
	RETURN i + 1;
END
$func$;