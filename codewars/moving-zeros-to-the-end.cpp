#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
	int zeros = 0;
	std::vector<int> output;
	for (int i : input) {
		if (!i) zeros++;
		else output.push_back(i);
	}
	while (zeros--) output.push_back(0);
	return output;
}

// Other solutions:
// * std::stable_partition
// * filling another vector of the same size with 0s and replacing them