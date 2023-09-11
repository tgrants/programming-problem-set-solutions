#include <cctype>
#include <string>
#include <vector>

std::string capitalize(std::string s, std::vector<int> idxs) {
	for (int i = 0; i < idxs.size(); i++)
		if (idxs[i] <= s.size())
			s[idxs[i]] = std::toupper(s[idxs[i]]);
	return s;
}