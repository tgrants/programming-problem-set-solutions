// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int main() {
	int n, k, m, d = 0, s = 0;
	scanf("%d %d %d", &n, &k, &m);
	while (s < m) {
		s += n;
		n += k;
		d++;
	}
	printf("%d", d);
}
