// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int main() {
	int s, a = 0, b, p, var = 1;
	scanf("%d %d", &s, &p);
	while (s) {
		scanf("%d", &b);
		if (b - a > p)
			var = 0;
		a = b;
		s--;
	}
	if (var)
		printf("Yey!");
	else
		printf("Oh, NO!");
}
