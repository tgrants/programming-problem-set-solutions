#include <stdio.h>

int main() {
	char a[100], b = 0;
	scanf("%s", a);
	while (b < 100) {
		if(a[b] == '.')
			a[b] = ',';
		b++;
	}
	printf("%s", a);
}
