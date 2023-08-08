int persistence(long long n){
	int count = 0;
	for (int m = 1; n / 10; count++, n = m, m = 1)
		do { m *= n % 10; } while (n /= 10);
	return count;
}