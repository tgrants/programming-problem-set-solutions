#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
	int ai = a == "" ? 0 : std::stoi(a);
	int bi = b == "" ? 0 : std::stoi(b);
	return std::to_string(ai + bi);
}
