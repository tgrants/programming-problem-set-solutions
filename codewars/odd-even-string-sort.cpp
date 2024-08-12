// Odd-Even String Sort
// https://www.codewars.com/kata/580755730b5a77650500010c
// 7kyu, Clang 8 C++17

#include <string>

std::string sortMyString(const std::string &s) {
	std::string even, odd;
	for (int i = 0; i < s.length(); i++) {
		if (i % 2) odd += s[i];
		else even += s[i];
	}
	return even + " " + odd;
}
