#include <stdio.h>

int main() {
	int d, m, g;
	scanf("%2d %2d %2d", &d, &m, &g);
	if (g > 16)
		g += 1900;
	else
		g += 2000;
	printf("%d", g - m - d);
}
