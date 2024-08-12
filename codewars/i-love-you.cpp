// I love you, a little , a lot, passionately ... not at all
// https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
// 8kyu, Clang 8 C++17

#include <string>

std::string how_much_i_love_you(int nb_petals) {
	std::string phrases[] = {"not at all", "I love you", "a little", "a lot", "passionately", "madly"};
	return phrases[nb_petals % 6];
}
