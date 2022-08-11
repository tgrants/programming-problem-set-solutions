#include <iostream>
#include <string>

int main() {
	int a;
	std::string s, r;
	std::cin >> a;
	while (a) {
		std::cin >> s;
		r += s[0];
		a--;
	}
	std::cout << r;
}
