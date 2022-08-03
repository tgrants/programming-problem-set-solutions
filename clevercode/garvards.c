// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int main() {
	char a[20];
	char b[20];
	scanf("%s", a);
	scanf("%s", b);
	for(int i = 19; i >= 0; i--) {
		if(a[i] == '\0') {
			if(b[i] != '\0') {
				printf("%s", b);
				return 0;
			}
		}
		else {
			printf("%s", a);
			return 0;
		}
	}
}
