#include <limits.h>
#include <string>

int find_short(std::string str) {
	int s = INT_MAX, c = 0;
	for (int i = 0; i <= str.length(); i++) {
		if (i == str.length() || str[i] == ' ') {
			if (c < s) s = c;
			c = 0;
		} else
			c++;
	}
	return s;
}