#include <string>

std::string evil(int n) {
	int count;
	for (count=0; n; count++)
		n &= n - 1;
	return count % 2 ? "It's Odious!" : "It's Evil!";
}