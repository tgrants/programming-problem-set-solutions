#include <algorithm>
#include <vector>

int min(std::vector<int> list) {
	return *std::min_element(list.begin(), list.end());
}

int max(std::vector<int> list) {
	return *std::max_element(list.begin(), list.end());
}