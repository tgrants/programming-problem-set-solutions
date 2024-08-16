// Anagram Detection
// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <string>

bool isAnagram(std::string test, std::string original) {
	std::transform(test.begin(), test.end(), test.begin(), ::toupper);
	std::transform(original.begin(), original.end(), original.begin(), ::toupper);
	std::sort(test.begin(), test.end());
	std::sort(original.begin(), original.end());
	return test == original;
}
