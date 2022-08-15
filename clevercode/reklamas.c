#include <stdio.h>

int main() {
	int n, k;
	long long m, d = 0, s = 0;
	scanf("%d %lli %lli", &n, &k, &m);
	while (s < m) {
		s += n;
		n += k;
		d++;
	}
	printf("%lli", d);
}
