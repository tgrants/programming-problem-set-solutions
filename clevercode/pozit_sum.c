#include <stdio.h>

int main() {
	int a, b, s = 0;
	scanf("%d", &a);
	while (a > 0) {
		scanf("%d", &b);
		if(b > 0)
			s += b;
		a--;
	}
	printf("%d", s);
}
