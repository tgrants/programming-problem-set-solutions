#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
	a += b;
	std::string output;
	do {
		output = std::to_string(a % 2) + output;
		a >>= 1;
	} while(a);
	return output;
}
