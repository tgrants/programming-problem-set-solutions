#include <stdio.h>

int main() {
	int h, m;
	scanf("%2d:%2d", &h, &m);
	m = 30 - (m - 30);
	m = (m == 60) ? 0 : m;
	h = 6 - (h - 6) + ((m > 0) ? -1 : 0);
	h = (h == 12) ? 0 : h;
	printf("%02d:%02d\n", h, m);
}
