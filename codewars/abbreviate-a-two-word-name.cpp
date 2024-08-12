// Abbreviate a Two Word Name
// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3
// 8kyu, Clang 8 C++17

#include <string>
#include <cctype>

std::string abbrevName(std::string name) {
	int i = 1;
	while(name[i++] != ' ');
	return std::string() + (char)std::toupper(name[0]) + '.' + (char)std::toupper(name[i]);
}
