#include <map>
#include <string>

size_t duplicateCount(const std::string& in) {
	std::map<char, int> count;
	for (char c : in) count[std::tolower(c)]++;
	std::size_t duplicates = 0;
	for (auto const& [key, val] : count) if (val > 1) duplicates++;
	return duplicates;
}