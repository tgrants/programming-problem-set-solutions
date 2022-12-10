#include <string>

bool isOpposite(const std::string& s1, const std::string& s2) {
	if (s1.length() != s2.length() || s1 == "") return false;
	for (int i = 0; i < s1.length(); i++)
		if (s1[i] - s2[i] - 32 && s2[i] - s1[i] - 32) return false;
	return true;
}