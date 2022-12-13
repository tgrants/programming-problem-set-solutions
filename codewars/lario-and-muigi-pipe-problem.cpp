#include <algorithm>
#include <numeric>
#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
	auto it = std::minmax_element(nums.begin(), nums.end());
	std::vector<int> v(*it.second - *it.first + 1);
	std::iota(std::begin(v), std::end(v), *it.first);
	return v;
}