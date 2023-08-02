#include <sstream>
#include <string>

std::string spinWords(const std::string &str) {
	std::stringstream iss(str), oss;
	std::string word;
	for (int i = 0; iss >> word; i++)
		oss << (i ? " " : "") << (word.length() < 5 ? word : std::string(word.rbegin(), word.rend()));
	return oss.str();
}