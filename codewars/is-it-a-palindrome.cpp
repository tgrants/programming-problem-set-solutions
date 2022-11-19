#include <string>

bool isPalindrom (const std::string& str) {
	for (int i = 0, j = str.length() - 1; i < j; i++, j--)
		if (tolower(str[i]) != tolower(str[j])) return false;
	return true;
}