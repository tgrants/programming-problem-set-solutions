#include <map>
#include <string>

std::string duplicate_encoder(const std::string& word) {
	std::map<char, int> count;
	std::string res;
	for (char c : word) count[std::tolower(c)]++;
	for (char c : word) res += count[std::tolower(c)] == 1 ? '(' : ')';
	return res;
}