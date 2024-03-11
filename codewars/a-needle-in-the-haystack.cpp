// A Needle in the Haystack
// https://www.codewars.com/kata/56676e8fabd2d1ff3000000c
// 8kyu, Clang 8 C++17

#include <algorithm>
#include <string>
#include <vector>

std::string findNeedle(const std::vector<std::string>& haystack) {
	auto it = std::find(haystack.begin(), haystack.end(), "needle");
	return "found the needle at position " + std::to_string(std::distance(haystack.begin(), it));
}
