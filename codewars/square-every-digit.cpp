#include <string>

int square_digits(int num) {
	std::string res = "";
	do res = std::to_string((num % 10) * (num % 10)) + res;
	while (num /= 10);
	return std::stoi(res);
}