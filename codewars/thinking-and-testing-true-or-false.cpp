#include <bitset>

int testit(int n) {
	return std::bitset<8 * sizeof(n)>(n).count();
}