#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
	std::string res;
	while (repeat--)
		res += str;
	return res;
}
