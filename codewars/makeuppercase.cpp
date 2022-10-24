#include <string>

std::string makeUpperCase(std::string str) {
	for (int i = 0; i < str.length(); i++)
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	return str;
}