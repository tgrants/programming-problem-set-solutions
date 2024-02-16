SELECT id, name, position(',' in characteristics) AS comma FROM monsters
ORDER BY comma;