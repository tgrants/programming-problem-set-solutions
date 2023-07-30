int digital_root(int n) {
	if (n / 10) {
		int s = 0;
		do { s += n % 10; } while (n /= 10);
		return digital_root(s);
	}
	return n;
}

// (n - 1) % 9 + 1