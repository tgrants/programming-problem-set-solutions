// Work-in-progress

#include <stdio.h>
#include <string.h>

void addToCharArray(char* a, int b) {
	int i = 0, carry = 0;
	for(int i = strlen(a) - 1; i >= 0; i--) {
		a[i] = a[i] + carry + (b % 10);
		carry = 0;
		while(a[i] > '9') {
			carry++;
			a[i] -= 10;
		}
		b /= 10;
	}
	printf("carry: %d\nb: %d\n", carry, b);
}

int main() {
	char a[50] = {0};
	int b;
	scanf("%s %d", a, &b);

	addToCharArray(a, b);

	printf("%s\n", a);
}
