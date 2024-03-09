#include <string>

bool solution(std::string const &str, std::string const &ending) {
	for (int i = str.size(), j = ending.size(); j >= 0; i--, j--)
		if (str[i] != ending[j]) return false;
	return true;
}

// return std::equal(ending.rbegin(), ending.rend(), str.rbegin());
