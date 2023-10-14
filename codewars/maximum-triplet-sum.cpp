#include <set>
#include <numeric>
#include <vector>

int maxTriSum (std::vector<int> numbers) {
	std::set<int> s(numbers.begin(), numbers.end());
	return std::accumulate(std::next(s.end(), -3), s.end(), 0);
}