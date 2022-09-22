// Work-in-progress, not submitted

#include <stdio.h>

int main() {
	int a = 1, b = 1, c = 1, n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		while (i < c && i <= n) {
			printf("%d\n", i);
			i++;
		}
		for (int j = i; j > 0; j /= 10) printf("*");
		printf("\n");
		c = a + b;
		a = b;
		b = c;
	}
}
