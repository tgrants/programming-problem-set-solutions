#include <stdio.h>

int main() {
	int n, s, d, r, rt, lt;
	scanf("%d", &n);
	scanf("%d", &s);
	scanf("%d", &d);

	rt = n - s;
	lt = n - rt - 1;

	if (d < rt)
		rt = d;
	if (d < lt)
		lt = d;

	r = rt + lt + 1;

	printf("%d", r);
}