#include <cmath>

bool narcissistic(int value) {
	int p = std::log10(value) + 1;
	int n = value;
	do
		value -= std::pow(n % 10, p);
	while (n /= 10);
	return !value;
}