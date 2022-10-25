#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
	if (input.empty()) return {};
	std::vector<int> output(2, 0);
	for (int i : input) {
		if (i > 0) output[0]++;
		else if (i < 0) output[1] += i;
	}
	return output;
}