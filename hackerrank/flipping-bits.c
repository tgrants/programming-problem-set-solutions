#include <stdio.h>

int main() {
	unsigned n, a;
	scanf("%u", &n);
	while (n) {
		scanf("%u", &a);
		printf("%u\n", ~a);
		n--;
	}
}