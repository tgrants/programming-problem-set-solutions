// Friend or Foe?
// https://www.codewars.com/kata/55b42574ff091733d900002f
// 8kyu, Clang 8 C++17

#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
	std::vector<std::string> result;
	result.reserve(input.size());
	for (auto name : input)
		if (name.length() == 4) result.push_back(name);
	if (result.empty()) result.push_back("");
	return result;
}
