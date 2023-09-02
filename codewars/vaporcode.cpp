#include <algorithm>
#include <cctype>
#include <string>

std::string vaporcode(std::string str) {
	str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
	}).base(), str.end());
	std::string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] != ' ')
			res += (char)std::toupper(str[i]) + (std::string)((i == str.length() - 1) ? "" : "  ");
	return res;
}

// Scuffed solution