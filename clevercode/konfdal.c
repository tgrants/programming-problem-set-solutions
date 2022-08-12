#include <stdio.h>

int main() {
	int n, k, m, c = 0;
	scanf("%d %d %d", &n, &k, &m);
	while(n > 0) {
		n -= k;
		c++;
		if(n <= 0)
			break;
		n -= m;
		c++;
	}
	printf("%d", c);
}
