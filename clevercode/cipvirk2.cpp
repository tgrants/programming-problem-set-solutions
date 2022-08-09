// WORK IN PROGRESS - NOT SUBMITTED

#include <iostream>

int main() {
	int a[4];
	for (int i = 0; i < 4; ++i) {
		std::cin >> a[i];
	}
	int n, j = 0;
	std::cin >> n;
	while(--n > 0) {
		a[j] = (a[0] +a[1] + a[2] + a[3]) % 10;
		if (j == 3)
			j = 0;
		else
			j++;
	}
	std::cout << a[j];
}
