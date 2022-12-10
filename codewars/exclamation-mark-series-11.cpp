#include <regex>
#include <string>

auto replace(const std::string &s) {
	return std::regex_replace(s, std::regex("[aeiouAEIOU]"), "!");
}