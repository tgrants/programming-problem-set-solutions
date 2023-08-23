#include <string>

std::string switcheroo(const std::string &s) {
	std::string res;
	for (char c : s)
		res += c == 'a' ? 'b' : c == 'b' ? 'a' : 'c';
	return res;
}