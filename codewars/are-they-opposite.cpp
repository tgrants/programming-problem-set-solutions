// They say that only the name is long enough to attract attention. They also said that only a simple Kata will have someone to solve it. This is a sadly story #1: Are they opposite?
// https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7
// 8kyu, Clang 8 C++17

#include <string>

bool isOpposite(const std::string& s1, const std::string& s2) {
	if (s1.length() != s2.length() || s1 == "") return false;
	for (int i = 0; i < s1.length(); i++)
		if (s1[i] - s2[i] - 32 && s2[i] - s1[i] - 32) return false;
	return true;
}
