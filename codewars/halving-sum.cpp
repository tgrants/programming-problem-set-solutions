unsigned halving_sum(unsigned n) {
	return n == 1 ? 1 : n + halving_sum(n / 2);
}