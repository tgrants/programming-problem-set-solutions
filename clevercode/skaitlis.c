#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d", &n, &m);
    for (k = n + 1; k % m; k++) {}
    printf("%d", k);
}
