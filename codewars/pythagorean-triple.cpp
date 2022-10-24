#include <algorithm>

bool PythagoreanTriple(int a, int b, int c) {
	if (a > c) std::swap(a, c);
	if (b > c) std::swap(b, c);
	return a * a + b * b == c * c;
}