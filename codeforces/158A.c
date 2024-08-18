#include <stdio.h>

int main () {
	int n, k, c = 0;
	scanf("%d %d", &n, &k);
	int p[n];
	for (int i = 0; i < n; i++) scanf("%d", &p[i]);
	for (int i = 0; i < n; i++)
		if (p[i] >= p[k - 1] && p[i] > 0) c++;
	printf("%d", c);
}
