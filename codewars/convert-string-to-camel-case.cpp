#include <string>

std::string to_camel_case(std::string text) {
	std::string result;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == '-' || text[i] == '_') {
		if (++i < text.length()) result += std::toupper(text[i]);
		}
		else result += text[i];
	}
	return result;
}