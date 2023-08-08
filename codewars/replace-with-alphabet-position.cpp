#include <cctype>
#include <sstream>
#include <string>

std::string alphabet_position(const std::string &text) {
	std::stringstream oss;
	for (int i = 0, j = 0; i < text.length(); i++)
		if (isalpha(text[i])) oss << (j++ ? " " : "") << std::toupper(text[i]) - 64;
	return oss.str();
}