#include <stdio.h>

int main() {
	int n;
	char a[] = "$|-~-";
	char b[] = "  -~-";
	scanf("%d", &n);
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < n * 2 - 1; j++) {
			if(j % 2) {
				printf("%c", b[i]);
			}
			else {
				printf("%c", a[i]);
			}
		}
		printf("%c", '\n');
	}
}
