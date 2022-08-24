#include <stdio.h>
#include <string.h>

int main() {
	char a[20], b[20];
	scanf("%s %s", a, b);
	for (int i = 0; i < strlen(b); i++) {
		int c = 0;
		for (int j = 0; j < strlen(a); j++) {
			if (b[i] == a[j]) {
				c++;
				break;
			}
		}
		if(!c) {
			printf("Nevar");
			return 0;
		}
	}
	printf("Var");
}
