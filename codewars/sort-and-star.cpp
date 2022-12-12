// Work-in-progress, not submitted

#include <string>
#include <vector>

std::string twoSort(std::vector<std::string> s) {
	int f = 0;
	for (int i = 0; i < s.size() - 1; i++)
		if (s[i].compare(s[i + 1]) > 0)
		f = i + 1;
	std::string res;
	for (int i = 0; i < s[f].size(); i++)
		res += s[f][i]; //+ ((i != s[f].size() - 1) ? "***" : "");
	return res;
}