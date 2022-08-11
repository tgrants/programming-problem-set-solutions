// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>

int main() {
	int n, counter = 0;
	scanf("%d", &n);
	for(int i = n - 1; i >= 1; i--) {
		counter++;
		if(n % i == 0)
			break;
	}
	printf("%d", counter);
}
