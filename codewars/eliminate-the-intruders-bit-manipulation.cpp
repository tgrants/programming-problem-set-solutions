#include <string>

long eliminate_unset_bits(std::string number) {
	long res = 1;
	for (char c : number) if (c == '1') res <<= 1;
	return res - 1;
}