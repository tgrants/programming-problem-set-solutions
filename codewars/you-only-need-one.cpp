#include <string>
#include <vector>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
	for (std::string str : seq) if (str == elem) return true;
	return false;
}