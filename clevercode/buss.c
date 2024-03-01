#include <stdio.h>

int time(int h, int m) {
	return h * 60 + m;
}

int main() {
	int n, h, m, c, d, t = 2880;
	scanf("%2d %2d %d", &h, &m, &n);
	c = time(h, m);
	while (n--) {
		scanf("%2d %2d", &h, &m);
		d = time(h, m);
		if (c > d) d += 1440;
		if (d < t) t = d;
	}
	printf("%d", t - c);
}
