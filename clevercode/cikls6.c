#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(b > a) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	while(a-- > 0) {
		printf("%d %c", b, '\n');
	}
}
