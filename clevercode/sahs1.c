// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int main() {
	char g[64];
	for(int i = 0; i < 64; i++)
		g[i] = '*';

	int x, y;
	scanf("%c %d", &x, &y);
	x -= 96;
	printf("%d %d\n", x, y);

	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++)
			printf("%c", g[i * 8 + j]);
		printf("\n");
	}
}
