#include <algorithm>
#include <vector>

std::vector<int> solve(std::vector<int> v) {
	std::sort(v.begin(), v.end());
	std::vector<int> res;
	for (bool s = false; !v.empty(); s = !s) {
		if (s) {
			res.push_back(v.front());
			v.erase(v.begin());
		} else {
			res.push_back(v.back());
			v.erase(v.end() - 1);
		}
	}
	return res;
}