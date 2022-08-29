// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int isPrime(int a) {
	// Can't use sqrt() because solutions are compiled without -lm
	if (a == 1)
		return 0;
	for (int i = 2; i <= a / 2; i++)
		if (a % i == 0)
			return 0;
	return 1;
}

int main() {
	int i, max, count = 0;
	scanf("%d %d", &i, &max);
	for (; i <= max; i++)
		if (isPrime(i))
			count++;
	printf("%d", count);
}
