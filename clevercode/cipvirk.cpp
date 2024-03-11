#include <iostream>

int main() {
	int a[2], n, j = 0;
	for (int i = 0; i < 2; i++)
		std::cin >> a[i];
	std::cin >> n;
	while(--n > 0) {
		a[j] = (a[0] + a[1]) % 10;
		j = (j == 1) ? 0 : j + 1;
	}
	std::cout << a[j] << std::endl;
}
