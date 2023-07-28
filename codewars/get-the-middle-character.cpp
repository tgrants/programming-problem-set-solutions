#include <string>

std::string get_middle(std::string input) {
	return input.substr((input.length() - 1) / 2, 2 - input.length() % 2);
}