// Double Char
// https://www.codewars.com/kata/56b1f01c247c01db92000076
// 8kyu, Clang 8 C++17

#include <string>

std::string double_char(const std::string& str) {
	std::string result;
	result.reserve(str.length() * 2);
	for (char c : str) result.append(2, c);
	return result;
}
