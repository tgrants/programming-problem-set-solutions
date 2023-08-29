#include <cctype>
#include <string>

std::string reverse_letter(const std::string &str) {
	std::string res;
	for (char c : str)
		res = (std::isalpha(c) ? std::string(1, c) : "") + res;
	return res;
}