bool hasFive(int n) {
	if (n < 0) n = -n;
	do if (n % 10 == 5) return true;
	while (n /= 10);
	return false;
}

int dontGiveMeFive(int start, int end) {
	int count = 0;
	for (int i = start; i <= end; i++)
		count += !hasFive(i);
	return count;
}