// Work-in-progress, not submitted

#include <stdio.h>

int main() {
	int n = 10000000, c = 0;
	int m[60] = {0};
	for (int i = 0; i <= n; i++) {
		int a;
		if (scanf("%d", &a))
			m[a - 1]++;
		else
			break;
	}
	for (int i = 0; i < 60; i++)
		if (m[i] > 0)
			c++;
	printf("%d\n", c);
}