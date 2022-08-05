#include <stdio.h>

int main() {
	int s, skaits, paara = 0;
	scanf("%d", &skaits);
	while (skaits > 0) {
		scanf("%d", &s);
		if(s % 2 == 0) {
			paara++;
		}
		skaits--;
	}
	printf("%d", paara);
}
