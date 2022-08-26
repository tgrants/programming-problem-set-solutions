#include <stdio.h>

int main() {
	int d, m = 1, y[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	scanf("%d", &d);
	for(int i = 0; i < 11; i++) {
		if (y[i] < d) {
			d -= y[i];
			m++;
		}
		else
			break;
	}
	printf("%d %d", d, m);
}
