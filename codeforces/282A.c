#include <stdio.h>

int main() {
	int n, x = 0;
	char op[4];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", op);
		x = op[1] == '+' ? x + 1 : x - 1;
	}
	printf("%d\n", x);
}
