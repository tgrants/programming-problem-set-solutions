#include <algorithm>
#include <vector>

unsigned long long minValue (std::vector<int> values) {
	std::sort(values.begin(), values.end());
	auto it = std::unique(values.begin(), values.end());
	values.resize(std::distance(values.begin(), it));

	long long result = 0;
	for (auto i : values) result = result * 10 + i;
	return result;
}

// Alternate solutions:
// * sort and erase
// * set and accumulate