#include <string>

int largest_five_digits(const std::string &digits) {
	int max = 0;
	for (int i = 0; i <= digits.length() - 5; i++) {
		int n = std::stoi(digits.substr(i, 5));
		if (n > max) max = n;
	}
	return max;
}