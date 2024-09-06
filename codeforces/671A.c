#include <stdio.h>

int main () {
	int x, d = 5, r = 0;
	scanf("%d", &x);
	while (x) {
		r += x / d;
		x %= d--;
	}
	printf("%d", r);
}
