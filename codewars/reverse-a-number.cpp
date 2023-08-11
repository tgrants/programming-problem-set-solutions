#include <cmath>

long long reverseNumber(long long n) {
	int res = 0;
	for (int m = std::log10(std::abs(n)); m >= 0; m--, n /= 10)
		res += std::pow(10, m) * (n % 10);
	return res;
}

// TODO: simplify solution