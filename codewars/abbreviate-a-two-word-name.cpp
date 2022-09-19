#include <string>
#include <cctype>

std::string abbrevName(std::string name) {
	int i = 1;
	while (name[i] != ' ')
		i++;
	return std::string() + (char)std::toupper(name[0]) + '.' + (char)std::toupper(name[i + 1]);
}