// Work-in-progress, not submitted

#include <stdio.h>

int main() {
	char g[8][8];
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			g[i][j] = '7';

	for(int i = 7; i >= 0; i--) {
		for(int j = 0; j < 8; j++)
			printf("%c", g[j][i]);
		printf("\n");
	}
}
