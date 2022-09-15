#include <stdio.h>

int main() {
	int s = 0, n, m[7] = {2, 7, 6, 5, 4, 3, 2};
	char b[11] = {'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};
	for (int i = 0; i < 7; i++) {
		scanf("%1d", &n);
		s += n * m[i];
	}
	printf("%c\n", b[s % 11]);
}