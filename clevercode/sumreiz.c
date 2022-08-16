#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--) {
		int cs = 0, cr = 1, p = n;
		while(p) {
			cs += p % 10;
			cr *= p % 10;
			p /= 10;
		}
		n += cs + cr;
	}
	printf("%d", n);
}
