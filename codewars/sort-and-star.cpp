// Follow-up: find smallest with std::min_element

#include <string>
#include <vector>

std::string twoSort(std::vector<std::string> s) {
	int f = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] < s[f])
		f = i;
	std::string res;
	for (int i = 0; i < s[f].size(); i++)
		res += s[f][i] + std::string(i != s[f].size() - 1 ? "***" : "");
	return res;
}