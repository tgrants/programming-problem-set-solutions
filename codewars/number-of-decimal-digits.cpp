// Number of Decimal Digits
// https://www.codewars.com/kata/58fa273ca6d84c158e000052
// 7kyu, Clang 8 C++17

#include <cstdint>

int digits(uint64_t n) {
	int digits = 1;
	while (n /= 10) digits++;
	return digits;
}
