// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int dsum(unsigned long long n) {
	int s = 0;
	do s += n % 10;
	while (n /= 10);
	return s;
}

int main() {
	unsigned long long g, i = 100, c = 0;
	scanf("%llu", &g);
	while (i < g) {
		if (dsum(i) == g - i) {
			if (c++) printf(" ");
			printf("%llu", i);
		}
		i++;
	}
	if (!c) printf("NAV");
}
