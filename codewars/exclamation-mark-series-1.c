#include <string.h>

char *remove_mark(char *string) {
	int last = strlen(string) - 1;
	if (string[last] == '!' && last >= 0)
		string[last] = '\0';
	return string;
}
