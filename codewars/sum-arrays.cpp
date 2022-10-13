#include <numeric>
#include <vector>

int sum(std::vector<int> nums) {
	return std::accumulate(nums.begin(), nums.end(), 0);
}