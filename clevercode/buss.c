// Work-in-progress, not submitted

#include <stdio.h>

int time(int h, int m) {
	return h * 60 + m;
}

int main() {
	int n, h, m, c, t = 1440;
	scanf("%2d %2d %d", &h, &m, &n);
	c = time(h, m);
	while (n--) {
		scanf("%2d %2d", &h, &m);
	}
	printf("%d", t);
}
