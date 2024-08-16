#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int p[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			p[j] += p[j + 1];
		}
	}
	printf("%d", p[0]);
}
