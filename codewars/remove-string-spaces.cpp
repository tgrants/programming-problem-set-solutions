#include <string>

std::string no_space(const std::string& x) {
	std::string res;
	for (int i = 0; i < x.length(); i++)
		if (x[i] != ' ')
			res += x[i];
	return res;
}