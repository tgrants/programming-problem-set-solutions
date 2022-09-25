#include <string>

std::string fakeBin(std::string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = (int(str[i]) - 48 < 5) ? '0' : '1';
	return str;
}