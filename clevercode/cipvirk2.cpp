// WORK IN PROGRESS - NOT SUBMITTED

#include <iostream>

int main() {
	int a[4], n, j = 0;
	for (int i = 0; i < 4; i++)
		std::cin >> a[i];
	std::cin >> n;
	while(--n > 0) {
		a[j] = (a[0] + a[1] + a[2] + a[3]) % 10;
		j = (j == 3) ? 0 : j + 1;
	}
	std::cout << a[j] << std::endl;
}
