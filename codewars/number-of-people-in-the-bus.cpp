#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
	int total = 0;
	for (auto stop : busStops) total += stop.first - stop.second;
	return total;
}