#include <vector>

std::vector<int> maps(const std::vector<int> & values) {
	std::vector<int> output;
	for (int v : values)
		output.push_back(v << 1);
	return output;
}
