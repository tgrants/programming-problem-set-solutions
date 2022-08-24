#include <stdio.h>

int main() {
	unsigned long long a, b, t;
	scanf("%llu %llu", &a, &b);
	// Euclidean algorithm
	while(b) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("%llu", a);
}
