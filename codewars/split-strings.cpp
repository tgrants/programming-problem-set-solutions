#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
	if (s.empty()) return {};
	std::vector<std::string> res;
	for (int i = 0; i < s.length(); i += 2)
		res.push_back(std::string() + s[i] + s[i + 1]);
	if (s.length() % 2) res[res.size() - 1] += "_";
	return res;
}