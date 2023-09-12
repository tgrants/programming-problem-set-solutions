#include <algorithm>
#include <vector>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers) {
	int sum = 0;
	for (auto v : numbers)
		sum += *std::min_element(v.begin(), v.end());
	return sum;
}