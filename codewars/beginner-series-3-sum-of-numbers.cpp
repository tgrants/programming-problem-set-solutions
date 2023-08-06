int get_sum(int a, int b) {
	return ((a > b ? a - b : b - a) + 1) * (a + b) / 2;
}