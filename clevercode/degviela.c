#include <stdio.h>

int main() {
	int n, a, b, p, d = 0;
	scanf("%d %d", &n, &p);
	while(n - 1) {
		scanf("%d", &b);
		a = b - p;
		if(a > 0)
			d += a + 1;
		else if (a == 0)
			d++;
		p = b;
		n--;
	}
	printf("%d", d);
}
