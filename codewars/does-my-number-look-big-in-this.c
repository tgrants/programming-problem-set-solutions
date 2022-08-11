#include <stdio.h>

int narcissistic(int a) {
    int b = a, d = 0, s = 0;
    while (b) {
        b /= 10;
        d++;
    }
    b = a;
    while (b) {
        int i = 0, n = 1;
        while (i < d) {
            n *= b % 10;
            i++;
        }
        s += n;
        b /= 10;
    }
    if (a == s)
        return 1;
    else
        return 0;
}
