#include <iostream>

int main() {
	int n, m, s = 0;
	std::cin >> n;
	do {
		std::cin >> m;
		s += m;
	} while (--n);
	std::cout << s;
}
