unsigned int hotpo(unsigned int n){
	int count = 0;
	for (; n > 1; count++)
		n = n & 1 ? 3 * n + 1 : n / 2;
	return count;
}