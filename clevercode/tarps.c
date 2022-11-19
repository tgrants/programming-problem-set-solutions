#include <stdio.h>

int main() {
	int m, n, p = 0;
	scanf("%d %d", &m, &n);
	while (1) {
		m--;
		if(m > 0)
			p++;
		else
			break;
		n--;
		if(n > 0)
			p++;
		else
			break;
	}
	printf("%d", p);
}
