#include <stdio.h>

int main() {
	char a[20], b[20];
	scanf("%s %s", a, b);
	for(int i = 0; i < 20; i++) {
		if (a[i] == 0) {
			if(b[i] != 0) {
				printf("%s", "Otrais");
				return 0;
			}
			printf("%s", "Pirmais");
			return 0;
		}
		else {
			if(b[i] == 0) {
				printf("%s", "Pirmais");
				return 0;
			}
		}
	}
	printf("%s", "Pirmais");
}
