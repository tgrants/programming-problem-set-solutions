#include <string>

std::string countSheep(int number) {
	std::string res;
	while (number--) res = std::to_string(number + 1) + " sheep..." + res;
	return res;
}