// All Star Code Challenge #18
// https://www.codewars.com/kata/5865918c6b569962950002a1
// 8kyu, Clang 8 C++17

#include <string>

unsigned int strCount(std::string word, char letter) {
	unsigned count = 0;
	for (char c : word) if (c == letter) count++;
	return count;
}

// Alternative solution: std::count
