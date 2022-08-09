#include <stdio.h>

int main() {
	int a, b, c = 0, d;
	scanf("%d %d", &a, &b);
	while(a-- > 0) {
		scanf("%d", &d);
		if(d == b)
			c++;
	}
	printf("%d", c);
}
