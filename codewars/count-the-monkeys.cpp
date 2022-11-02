#include <vector>

std::vector<int> MonkeyCount(int n) {
	std::vector<int> m;
	for(int i = 1; i <= n; i++)
		m.push_back(i);
	return m;
}