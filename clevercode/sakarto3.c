#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(c < b)
		swap(&c, &b);
	if(b < a)
		swap(&b, &a);
	if(c < b)
		swap(&c, &b);
	printf("%d %d %d", a, b, c);
}
