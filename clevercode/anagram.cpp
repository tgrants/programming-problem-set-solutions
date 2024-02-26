#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string a, b, c;
	int s;
	std::cin >> a >> s;
	std::sort(a.begin(), a.end());
	while (s--) {
		std::cin >> b;
		c = b;
		std::sort(c.begin(), c.end());
		if (a == c) std::cout << b << std::endl;
	}
}