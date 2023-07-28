#include <string>

bool validParentheses(const std::string& str) {
	int open = 0;
	for (char c : str) {
		if (c == '(') open++;
		else if (open < 1) return false;
		else open--;
	}
	return !open;
}