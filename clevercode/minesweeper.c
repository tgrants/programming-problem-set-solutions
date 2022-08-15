#include <stdio.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	char field[n + 2][m + 2];
	for(int i = 0; i < n + 2; i++) {
		for(int j = 0; j < m + 2; j++)
			field[i][j] = '0';
	}
	while(k) {
		int x, y;
		scanf("%d %d", &x, &y);
		field[x][y] = '*';
		for(int i = -1; i < 2; i++)
			for(int j = -1; j < 2; j++)
				if(field[x + i][y + j] != '*')
					field[x + i][y + j]++;
		k--;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%c", field[i + 1][j + 1]);
		printf("\n");
	}
}
