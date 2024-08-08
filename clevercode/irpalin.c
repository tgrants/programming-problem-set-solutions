#include <ctype.h>
#include <stdio.h>

int main() {
	int strsize;
	scanf("%d", &strsize);
	char str[strsize];
	scanf(" %[^\n]s", str);

	int i = 0;
	int j = strsize - 1;

	while (i < j) {
		while (!isalpha(str[i])) i++;
		while (!isalpha(str[j])) j--;

		if (tolower(str[i]) != tolower(str[j])) {
			printf("NAV");
			return 0;
		}

		i++;
		j--;
	}

	printf("IR");
}
