#include <algorithm>
#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
	std::swap(arr.front(), arr.back());
	return arr;
}