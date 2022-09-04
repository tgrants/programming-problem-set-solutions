#include <string>

bool XO(const std::string& str) {
	int b = 0;	// balance
	for (char c : str)
		b = (c == 'x' || c == 'X') ? b + 1 : (c == 'o' || c == 'O') ? b - 1 : b;
	return b == 0;
}