// Alphabetical Addition
// https://www.codewars.com/kata/5d50e3914861a500121e1958
// 7kyu, Clang 8 C++17

#include <vector>

char add_letters(std::vector<char> letters) {
	int sum = 0;
	for (char l : letters) sum += l - 96;
	sum %= 26;
	return sum ? '`' + sum : 'z';
}
