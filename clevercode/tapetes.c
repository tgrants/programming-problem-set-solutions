#include <stdio.h>

int main() {
	int a, b, c, d, e, f, sl, tl;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	sl = ((a * c) + (b * c)) * 2;
	tl = d * e * f;
	printf("%d\n", sl - tl);
	if (sl > tl)
		printf("nepietiek");
	else
		printf("pietiek");
}
