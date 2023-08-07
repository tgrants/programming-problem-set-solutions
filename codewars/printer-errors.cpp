#include <algorithm>
#include <string>

class Printer {
public:
	static std::string printerError(const std::string &s) {
		return std::to_string(std::count_if(s.begin(), s.end(), [](char c) { return c > 'm'; })) + "/" + std::to_string(s.length());
	}
};