#include <stdio.h>
#include <string.h>

int main() {
    char b[12][2] = {
        "aa", "ee", "ii", "oo", "uu",
        "gj", "lj", "kj", "nj",
        "ch", "sh", "zh"};
	char s[250] = {0};
	scanf("%[^\t\n]", &s);
	int bs = 1;
	for (int i = 1; i < strlen(s); i++) {
		if (s[i] != ' ')
			bs++;
		for (int j = 0; j < 12; j++) {
			if(s[i - 1] == b[j][0] && s[i] == b[j][1]) {
				bs--;
				s[i] = '-';
				break;
			}
		}
	}
	printf("%d", bs);
}
