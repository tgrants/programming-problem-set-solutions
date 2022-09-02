// Work-in-progress, not submitted

#include <stdio.h>

char g[8][8];

void zirgs(int x, int y, int c) {
	g[x][y] = c + 48;
	int m [8][2] = {{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};
	for (int i = 0; i < 8; i++) {
		int mx = m[i][0], my = m[i][1];
		if (x + mx < 8 && y + my < 8 &&  x + mx >= 0 && y + my >= 0 && g[x + mx][y + my] > c + 48)
			zirgs(x + mx, y + my, c + 1);
	}
	return;
}

int main() {
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			g[i][j] = '8';

	int x, y;
	scanf("%c %d", &x, &y);
	x -= 97;
	y -= 1;

	zirgs(x, y, 0);

	for(int i = 7; i >= 0; i--) {
		for(int j = 0; j < 8; j++)
			printf("%c", g[j][i]);
		printf("\n");
	}
}
