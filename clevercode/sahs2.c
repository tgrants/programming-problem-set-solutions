#include <stdio.h>

int main() {
	int x, y;
	scanf("%c %d", &x, &y);
	x -= 97;
	y -= 1;

	char g[8][8];
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			g[i][j] = ((i + j + x + y) % 2) ? '*' : '2';

	for(int i = x, j = y; i < 8 && j < 8; i++, j++)
		g[i][j] = '1';
	for(int i = x, j = y; i >= 0 && j >= 0; i--, j--)
		g[i][j] = '1';
	for(int i = x, j = y; i >= 0 && j < 8; i--, j++)
		g[i][j] = '1';
	for(int i = x, j = y; i < 8 && j >= 0; i++, j--)
		g[i][j] = '1';
	g[x][y] = '0';

	for(int i = 7; i >= 0; i--) {
		for(int j = 0; j < 8; j++)
			printf("%c", g[j][i]);
		printf("\n");
	}
}
