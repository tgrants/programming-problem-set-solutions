#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(c > a && c < b)
		printf("ir");
	else
		printf("nav");
}
