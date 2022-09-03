// Work-in-progress, not submitted

#include <stdio.h>

int main() {
	int n, m, a, b, s;
	scanf("%d %d", &n, &m);
	short arr[n];
	for (int i = 0; i < n; i++)
		scanf("%hd", &arr[i]);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		s = 0;
		for (int j = a - 1; j < b; j++)
			s += arr[j];
		printf("%hd", s);
	}
}
