// WORK IN PROGRESS - NOT SUBMITTED

#include <limits.h>
#include <stdio.h>

int main() {
    int n, m, t = INT_MAX, l = 0;
    scanf("%d %d", &n, &m);
    int k[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &k[i]);
        int d = k[i] / m;
        if (d < t)
            t = d;
    }
    for (int i = 0; i < n; i++)
        l += k[i] - t * m;
    printf("%d %d", t, l);
}
