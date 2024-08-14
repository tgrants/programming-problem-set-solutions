// All unique
// https://www.codewars.com/kata/553e8b195b853c6db4000048
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <string>

bool hasUniqueChars(std::string s) {
	std::sort(s.begin(), s.end());
	for (int i = 0; i + 1 < s.size(); i++)
		if (s[i] == s[i + 1]) return false;
	return true;
}

// Alternative solutions: std::set, std::unique
