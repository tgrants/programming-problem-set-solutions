#include <cmath>

long int findNextSquare(long sq) {
	long s = std::sqrt(sq);
	return s * s == sq ? std::pow(s + 1, 2) : -1;
}