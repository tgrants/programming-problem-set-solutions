#include <stdio.h>

int main() {
	int a[10], b = 0, c = 0;
	for(int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] > a[0])
			b++;
	}
	for(int i = 8; i >= 0; i--) {
		if (a[i] < a[9])
			c++;
	}
	printf("%d %d %d", a[0] + a[9], b, c);
}
