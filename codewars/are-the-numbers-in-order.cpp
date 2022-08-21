#include <algorithm>
#include <vector>

bool isAscOrder(std::vector<int> arr) {
	return std::is_sorted(arr.begin(), arr.end());
}
