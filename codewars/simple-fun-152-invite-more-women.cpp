#include <numeric>
#include <vector>

bool invite_more_women(const std::vector<int> &invited) {
	return std::accumulate(invited.begin(), invited.end(), 0) > 0;
}