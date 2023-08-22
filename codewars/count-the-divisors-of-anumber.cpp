int divisors(int n) {
	int d = 1;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0) d++;
	return d;
}