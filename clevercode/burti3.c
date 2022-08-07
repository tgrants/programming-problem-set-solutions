#include <stdio.h>

int main() {
	int a, b;
    while((a = getchar()) != '\n' && a != EOF)
		b = a;
	printf("%c", b);
}
