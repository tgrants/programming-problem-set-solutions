#include <numeric>
#include <vector>

bool betterThanAverage(std::vector<int> v, int p) {
	return std::reduce(v.begin(), v.end()) / v.size() < p;
}