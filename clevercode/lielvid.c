#include <stdio.h>

int main() {
	int s, c = 0;
	scanf("%d", &s);
	int a[s];
	float b = 0;
	for(int i = 0; i < s; i++) {
		scanf("%d", &a[i]);
		b += a[i];
	}
	b /= s;
	for(int i = 0; i < s; i++) {
		if (a[i] > b)
			c++;
	}
	printf("%d", c);
}
