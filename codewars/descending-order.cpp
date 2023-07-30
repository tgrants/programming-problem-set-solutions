#include <algorithm>
#include <cinttypes>
#include <string>

uint64_t descendingOrder(uint64_t a) {
	std::string str = std::to_string(a);
	std::sort(str.rbegin(), str.rend());
	return std::stoul(str);
}