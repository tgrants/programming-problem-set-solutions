#include <cmath>

double distance_between_two_points(const Point& a, const Point& b) {
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) * 1.0);
}