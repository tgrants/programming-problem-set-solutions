#include <stdio.h>

int main() {
	int n, a, mi = 0, primes[31] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127};
	char message[100] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 0; j < 31; j++) {
			if (a == primes[j]) {
				message[mi] = (char)a;
				mi++;
			}
		}
	}
	printf("%s", &message);
}