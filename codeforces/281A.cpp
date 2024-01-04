#include <iostream>

int main() {
	std::string str;
	std::cin >> str;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';
	std::cout << str;
}