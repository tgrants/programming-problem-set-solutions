#include <cctype>
#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s) {
	std::string s1, s2;
	for (int i = 0; i < s.size(); i++) {
		s1 += i % 2 ? std::tolower(s[i]) : std::toupper(s[i]);
		s2 += i % 2 ? std::toupper(s[i]) : std::tolower(s[i]);
	}
	return {s1, s2};
}