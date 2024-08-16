#include <stdio.h>

int main() {
	long n, c = 0;
	scanf("%ld", &n);
	do {
		if (n % 10 % 2 == 0) c++;
	} while (n /= 10);
	printf("%ld", c);
}
