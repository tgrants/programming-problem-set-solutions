#include <stdio.h>

int main() {
	int n, s = 0, c = 0;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > s)
			s = arr[i];
	}
	for (int i = 0; i < n; i++)
		if (arr[i] == s)
			c++;
	printf("%d\n", c);
}