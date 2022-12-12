#include <string>

bool is_digit(std::string s) {
	if (s.empty())
		return false;
	char* ptr;
	strtof(s.c_str(), &ptr);
	return *ptr == NULL;
}