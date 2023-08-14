#include <string>

long long filter_string(const std::string &value) {
	std::string num;
	for(char c : value) if (std::isdigit(c)) num += c;
	return std::stoll(num);
}