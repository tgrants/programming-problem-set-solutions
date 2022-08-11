unsigned int countBits(unsigned long long n) {
	int s = 0;
	while(n > 0) {
    	if (n % 2)
      		s++;
    	n /= 2;
	}
	return s;
}
