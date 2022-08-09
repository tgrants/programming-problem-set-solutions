#include <stdio.h>

int main() {
	int a, b, s = 0;
	scanf("%d", &a);
	while (a > 0) {
		scanf("%d", &b);
		if(b % 2)
			s += b;
		else
			s += b / 2;
		a--;
	}
	printf("%d", s);
}
