#include <stdio.h>

int main() {
	int n, c = 0;
	scanf("%d", &n);
	while (n) {
		int p, v, t;
		scanf("%d %d %d", &p, &v, &t);
		if (p + v + t > 1) c++;
		n--;
	}
	printf("%d\n", c);
}