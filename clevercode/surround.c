#include <limits.h>
#include <stdio.h>

int main() {
	int m, vmin = 0, vmax = INT_MAX;
	scanf("%d", &m);
	while (m) {
		int h, x;
		scanf("%d %d", &h, &x);
		if (x > vmin)
			vmin = x;
		if (x + h < vmax)
			vmax = x + h;
		m--;
	}
	int res = vmax - vmin;
	printf("%d", (res < 0) ? 0 : res);
}
