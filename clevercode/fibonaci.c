#include <stdio.h>

int main() {
	int a = 1, b = 1, c = 1, n;
	scanf("%d", &n);
	for(int i = 2; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", c);
}
