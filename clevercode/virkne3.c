// WORK IN PROGRESS - NOT SUBMITTED
// aabaabaababababbaababa

#include <stdio.h>

int main() {
	char n[250] = {0};
	int i = 0;
	while((n[i] = getchar()) != '\n' && n[i] != EOF) {
		if (n[i] != n[i - 1])
			i++;
	}
	printf("%s", n);
}
