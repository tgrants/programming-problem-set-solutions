// WORK IN PROGRESS - NOT SUBMITTED

#include <iostream>
#include <string>

int main() {
	int n, neg = false;
	std::cin >> n;
	std::string str;
	if (n < 0) {
		n *= -1;
		neg = true;
	} else if (n == 0) str = "0";
	for (int i = 0; n; i++, n /= 10) {
		if (i % 3 == 0) str = " " + str;
		str = std::to_string(n % 10) + str;
	}
	std::cout << (neg ? "-" : "") << str << std::endl;
}
