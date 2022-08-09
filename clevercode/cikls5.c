#include <stdio.h>

int main() {
	int a, b, s = 0;
	scanf("%d %d", &a, &b);
	for(; a <= b; a++) {
		s += a;
	}
	printf("%d", s);
}
