#include <stdio.h>

int main() {
	char a;
	int c = 0, l = 0;
	while((a = getchar()) != '.') {
		if (a == ' ') {
			if (c > l)
				l = c;
			c = 0;
		}
		else
			c++;
	}
	if (c > l)
		l = c;
	printf("%d", l);
}
