#include <iostream>

int main() {
	int n, i = 0, res = 0;
	std::cin >> n;
	char* stones = new char[n], prev = '\0';
	std::cin >> stones;
	while (stones[i] != '\0') {
		if (stones[i] == prev) res++;
		else prev = stones[i];
		i++;
	}
	std::cout << res << std::endl;
}
