#include <stdio.h>

int main() {
	int n, m, s = 1;
	scanf("%d %d", &n, &m);
	while (n != m) {
		if(n < m) {
			n ^= m;
			m ^= n;
			n ^= m;
		}
		n -= m;
		s++;
	}
	printf("%d", s);
}
