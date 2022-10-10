#include <vector>

std::vector<int> between(int start, int end) {
	std::vector<int> res; 
	while (start <= end)
		res.push_back(start++);
	return res;
}