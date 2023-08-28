int maxMultiple(int divisor, int bound) {
	int n = bound;
	do { if (n % divisor == 0) return n; } while (n--);
}

// Alternative solution: bound - bound % divisor