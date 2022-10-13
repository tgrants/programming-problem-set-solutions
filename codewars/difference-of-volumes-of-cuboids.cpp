#include <array>
#include <cstdlib>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
	return std::abs(a[0] * a[1] * a[2] - b[0] * b[1] * b[2]);
}