#include <stdio.h>
#include <limits.h>

int main() {
	int a, c, m = INT_MAX;
	scanf("%d", &a);
	while(a > 0) {
		scanf("%d", &c);
		if(c < m)
			m = c;
		a--;
	}
	printf("%d", m);
}
