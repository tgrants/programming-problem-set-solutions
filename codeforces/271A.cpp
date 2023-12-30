#include <iostream>

bool unique(int n) {
	int digits[10] = {0};
	do if (digits[n % 10]++ > 0) return 0; while (n /= 10);
	return 1;
}

int main () {
	int y;
	std::cin >> y;
	while(!unique(++y));
	std::cout << y;
}