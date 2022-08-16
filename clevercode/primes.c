// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>
#include <math.h>

int isPrime(int a) {
    for (int i = 2; i < sqrt(a); i++)
		if (a % i == 0) 
            return 0;
    return 1;
}

int main() {
    int i, max, count = 0;
    scanf("%d %d", &i, &max);
    for (; i <= max; i++)
        if (isPrime(i))
            count++;
    printf("%d", count);
}
