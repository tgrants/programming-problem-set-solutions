#include <cmath>

double startingMark(double bodyHeight) {
	double slope = (10.67 - 9.45) / (1.83 - 1.52);
	double offset = 10.67 - (slope * 1.83);
	return std::round((slope * bodyHeight + offset) * 100) / 100;
}