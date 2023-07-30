#include <algorithm>
#include <string>
#include <vector>

bool is_isogram(std::string str) {
	for (char& c : str) c = tolower(c);
	std::sort(str.begin(), str.end());
	return std::unique(str.begin(), str.end()) == str.end();
}