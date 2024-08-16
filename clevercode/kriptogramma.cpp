#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string a, b;
	int n;
	std::cin >> n;
	while (n--) {
		std::cin >> a >> b;
		std::sort(a.begin(), a.end());
		std::sort(b.begin(), b.end());
		std::cout << (a == b ? "JA" : "NE") << std::endl;
	}
}
