#include <cmath>
#include <vector>

std::vector<int> squareOrSquareRoot(const std::vector<int>& array) {
	std::vector<int> res;
	for (auto i : array) {
		int sqr = std::sqrt(i);
		if (sqr * sqr == i) res.push_back(sqr);
		else res.push_back(i * i);
	}
	return res;
}