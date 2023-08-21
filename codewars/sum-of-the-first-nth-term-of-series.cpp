#include <cmath>
#include <string>

std::string seriesSum(int n) {
	float res = 0;
	for (int d = 1; n--; d += 3) res += 1.0 / d;
	return std::to_string(std::round(res * 100.0) / 100).erase(4, std::string::npos);
}