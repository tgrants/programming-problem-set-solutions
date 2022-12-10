#include <numeric>
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
	return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}