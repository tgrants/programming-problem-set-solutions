// Sentence Smash
// https://www.codewars.com/kata/53dc23c68a0c93699800041d
// 8kyu, Clang 8 C++17

#include <string>
#include <vector>

std::string smash(const std::vector<std::string>& words) {
	if (words.size() == 0) return "";
	std::string result = words[0];
	for (int i = 1; i < words.size(); ++i)
		result += " " + words[i];
	return result;
}
