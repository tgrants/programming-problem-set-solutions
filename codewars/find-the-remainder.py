def remainder(a, b):
	if b > a:
		a, b = b, a
	if b == 0:
		return None
	return a % b