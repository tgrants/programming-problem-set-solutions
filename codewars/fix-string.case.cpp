#include <cctype>
#include <string>

std::string solve(const std::string& str){
	int upper = 0;
	for (char c : str) if (std::isupper(c)) upper++;
	std::string res;
	if (upper > str.length() / 2)
		for (char c : str) res += std::toupper(c);
	else
		for (char c : str) res += std::tolower(c);
	return res;
}