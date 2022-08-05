#include <stdio.h>

int main() {
	unsigned long long n;
	scanf("%llu", &n);
	for(int i = n - 1; i > 0; i--) {
		n *= i;
	}
	printf("%llu", n);
}
