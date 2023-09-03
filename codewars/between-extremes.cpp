#include <algorithm>
#include <vector>

int betweenExtremes(const std::vector<int>& numbers) {
	const auto [min, max] = std::minmax_element(std::begin(numbers),std::end(numbers));
	return *max - *min;
}