#include <utility>
#include <vector>

std::pair<int,int> rowWeights(const std::vector<int> &weights) {
	int a = 0, b = 0;
	for (int i = 0; i < weights.size(); i++)
		i % 2 ? b += weights[i] : a += weights[i];
	return {a, b};
}