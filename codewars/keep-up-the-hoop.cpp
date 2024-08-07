// Keep up the hoop
// https://www.codewars.com/kata/55cb632c1a5d7b3ad0000145
// 8kyu, Clang 8 C++17

#include <string>

std::string hoop_count(unsigned n) {
	return n < 10 ? "Keep at it until you get it" : "Great, now move on to tricks";
}
