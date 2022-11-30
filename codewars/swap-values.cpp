#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
	return std::pair<int, int>(values.second, values.first);
}