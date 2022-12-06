int countSquares(int c) {
	return c ? 6 * c * c + 2 : 1;
}

/* Naive solution
#include <cmath>

int countSquares(int cuts) {
	return cuts ? std::pow(cuts + 1, 3) - std::pow(cuts - 1, 3) : 1;
}*/