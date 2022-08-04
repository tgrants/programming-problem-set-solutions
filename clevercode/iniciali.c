#include <stdio.h>

int main() {
	char a[20];
	char b[20];
	scanf("%s", a);
	scanf("%s", b);
	char r[5] = " . .\0";
	r[0] = a[0];
	r[2] = b[0];
	printf("%s", r);
}
