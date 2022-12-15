#include <algorithm>
#include <cstdint>

uint16_t expressionsMatter(uint16_t a, uint16_t b, uint16_t c) {
	return std::max({a + b + c, a * b * c, (a + b) * c, a * (b + c)});
}