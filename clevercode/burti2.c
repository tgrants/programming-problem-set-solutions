#include<stdio.h>

int main() {
	char r[6];
	for(int i = 0; i < 5; i++) {
		r[i] = getchar();
		int a;
		while((a = getchar()) != '\n' && a != EOF);
	}
	printf("%s", r);
}
