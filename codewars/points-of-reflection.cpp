#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int>& p, const std::pair<int, int>& q) {
	return { q.first * 2 - p.first, q.second * 2 - p.second };
}