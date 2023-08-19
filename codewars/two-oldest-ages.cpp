#include <algorithm>
#include <array>
#include <vector>

std::array<int, 2> two_oldest_ages(std::vector<int> ages) {
	std::sort(ages.rbegin(), ages.rend());
	return {ages[1], ages[0]};
}