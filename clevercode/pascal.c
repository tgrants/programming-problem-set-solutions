// WORK IN PROGRESS - NOT SUBMITTED
// TODO - Try optimising, not rewriting

#include <stdio.h>

int main() {
	/*
	long n, counter = 0;
	scanf("%li", &n);
	for(long i = n - 1; i >= 1; i--) {
		counter++;
		if(n % i == 0)
			break;
	}
	printf("%li", counter);
	*/

	long long n, d = 2;
	scanf("%lli", &n);
	for (; d <= n; d++)
		if (n % d == 0) break;
	printf("%lli\n", n / d);
}
