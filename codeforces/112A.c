#include <ctype.h>
#include <stdio.h>

int main() {
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);
	int cmp = 0;
	for(int i = 0; i < 100 && !cmp; i++) {
		char a = tolower(str1[i]), b = tolower(str2[i]);
		if (!a && !b) break;
		cmp = a > b ? 1 : a < b ? -1 : 0;
	}
	printf("%d", cmp);
}