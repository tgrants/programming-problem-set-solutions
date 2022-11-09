#include <string>

std::string to_alternating_case(std::string s) {
	for (int i = 0; i < s.length(); i++)
		s[i] = (s[i] > 64 && s[i] < 91) ? s[i] + 32 : (s[i] > 96 && s[i] < 123) ? s[i] - 32 : s[i];
	return s;
}