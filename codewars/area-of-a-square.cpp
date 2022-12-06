#include <cmath>

double square_area(double A) {
	return std::round(std::pow(A * 2 / M_PI, 2) * 100) / 100;
};