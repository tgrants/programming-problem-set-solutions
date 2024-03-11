// 101 Dalmatians - squash the bugs, not the dogs!
// https://www.codewars.com/kata/56f6919a6b88de18ff000b36
// 8kyu, Clang 8 C++17

#include <string>

std::string howManyDalmatians(int number) {
	switch (number) {
		case 0 ... 10: return "Hardly any";
		case 11 ... 50: return "More than a handful!";
		case 51 ... 100: return "Woah that's a lot of dogs!";
		case 101: return "101 DALMATIONS!!!";
	}
}
