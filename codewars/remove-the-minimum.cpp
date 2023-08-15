#include <algorithm>
#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
	if (numbers.empty()) return {};
	auto res = numbers;
	res.erase(std::min_element(res.begin(), res.end()));
	return res;
}