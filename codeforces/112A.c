#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);
	for(int i = 0; i < 100; i++){
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
	}
	int cmp = strcmp(str1, str2);
	printf("%s %s\n", str1, str2);
	if (cmp > 0) cmp = 1;
	else if (cmp < 0) cmp = -1;
	printf("%d", cmp);
}