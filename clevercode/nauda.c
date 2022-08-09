#include <stdio.h>

int main() {
	int m, s, p, jm, jp;
	scanf("%d %d %d", &m, &s, &p);
	jp = p + ((s + m * 20) * 12);
	jm = jp / 100;
	jp %= 100;
	printf("%d %d", jm, jp);
}
