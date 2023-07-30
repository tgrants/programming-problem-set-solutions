#include <cmath>

bool is_square(int n) {
	int a = std::sqrt(n);
	return a * a == n;
}