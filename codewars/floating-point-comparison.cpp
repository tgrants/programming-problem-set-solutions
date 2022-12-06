#include <cmath>

bool approx_equals(double a, double b) {
	return std::abs(a - b) < 0.001;
}