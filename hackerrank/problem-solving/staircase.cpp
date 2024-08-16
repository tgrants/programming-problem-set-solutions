#include <iostream>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << ((n - j - 1 > i) ? ' ' : '#');
		std::cout << '\n';
	}
	std::cout << std::flush;
}
