#include <stdio.h>

int main() {
	char a[20];
	int i = 0, s = 0;
	scanf("%s", &a);
	while(i < 64 && a[i] != '\0') {
		s += a[i] - 48;
		i++;
	}
	printf("%d", s);
}
