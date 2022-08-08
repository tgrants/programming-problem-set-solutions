// Checks if a given number is an armstrong number
// See clevercode/armstr.c for a different solution
// https://en.wikipedia.org/wiki/Narcissistic_number

#include <stdio.h>

int main() {
	int a, b, d = 0, s = 0;
	scanf("%d", &a);
	b = a;
	while (b) {
		b /= 10;
		d++;
	}
	b = a;
	while (b) {
		int i = 0, n = 1;
		while (i < d) {
			n *= b % 10;
			i++;
		}
		s += n;
		b /= 10;
	}
	if(a == s)
		printf("TRUE");
	else
		printf("FALSE");
}
