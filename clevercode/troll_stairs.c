#include <stdio.h>

int main() {
	int s, a = 0, b, p, var = 1;
	scanf("%d %d %d", &s, &p, &a);
	while (s - 1) {
		scanf("%d", &b);
		if (b - a > p)
			var = 0;
		a = b;
		s--;
	}
	printf((var) ? "Yey!" : "Oh, NO!");
}
