#include <cmath>
#include <utility>

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
	return {
		std::round((p1.first + p2.first + p3.first) / 3 * 10000) / 10000,
		std::round((p1.second + p2.second + p3.second) / 3 * 10000) / 10000
	};
}