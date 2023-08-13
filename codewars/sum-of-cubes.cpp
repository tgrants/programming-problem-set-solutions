unsigned int sum_cubes(unsigned int n) {
	int sum = 0;
	do { sum += n * n * n; } while (n--);
	return sum;
}