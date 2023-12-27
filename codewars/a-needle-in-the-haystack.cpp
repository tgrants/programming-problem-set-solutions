#include <algorithm>
#include <string>
#include <vector>

std::string findNeedle(const std::vector<std::string>& haystack) {
	auto it = std::find(haystack.begin(), haystack.end(), "needle");
	return "found the needle at position " + std::to_string(std::distance(haystack.begin(), it));
}