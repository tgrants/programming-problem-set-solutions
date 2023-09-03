#include <algorithm>
#include <string>

bool hasUniqueChars(std::string s) {
	std::sort(s.begin(), s.end());
	for (int i = 0; i + 1 < s.size(); i++)
		if (s[i] == s[i + 1]) return false;
	return true;
}

// Alternative solutions: std::set, std::unique