#include <string>

std::string pattern(int n) {
	std::string res;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
		res += std::to_string(i);
		if (i < n) res += '\n';
	}
	return res;
}