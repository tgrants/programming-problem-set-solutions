#include <stdio.h>

int main() {
    long long a;
	int i = 0;
    scanf("%lli", &a);
    while (a) {
		if (a % 2)
			printf("%d ", i);
        a /= 2;
        i++;
    }
}
