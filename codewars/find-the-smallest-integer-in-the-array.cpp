#include <algorithm>
#include <vector>

int findSmallest(std::vector<int> list) {
	return *std::min_element(list.begin(), list.end());
}