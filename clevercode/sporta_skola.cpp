#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;
	for(int i = n; i <= m; i++) {
		if(i % 2 != 0) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	for(int i = n; i <= m; i++) {
		if(i % 2 == 0) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}
