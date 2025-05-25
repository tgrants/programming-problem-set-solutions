#include <stdio.h>

int main() {
	int c = 0;
	char str[100] = {'\0'};
	scanf("%s", &str);
	for (int i = 1; str[i] != '\0'; i++) {
		if (str[i - 1] == str[i]) {
			if (++c == 6) {
				printf("YES");
				return 0;
			}
		}
		else
			c = 0;
	}
	printf("NO");
}
