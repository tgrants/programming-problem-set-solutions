// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>
#include <string.h>

void addToCharArray(char* a, int b) {
}

int main() {
    char a[50] = {0};
    char s[50] = {0};
    scanf("%s", &a);
    int d = strlen(a);
    for (int i = 0; i < d; i++) {
        int j = 0, n = 1;
        for (int j = 0; j < d; j++)
            n *= a[i] - 48;
        addToCharArray(s, n);
    }
    printf("%s %s\n", a, s);
    printf((strcmp(a, s) == 0) ? "IR" : "NAV");
}
