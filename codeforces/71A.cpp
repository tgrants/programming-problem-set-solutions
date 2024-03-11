#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;
	while (n) {
		std::string str;
		std::cin >> str;
		if (str.length() > 10)
			str = str[0] + std::to_string(str.length() - 2) + str[str.length() - 1];
		std::cout << str << std::endl;
		n--;
	}
}
