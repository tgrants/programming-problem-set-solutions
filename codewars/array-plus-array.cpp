// Array plus array
// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151
// 8kyu, Clang 8 C++17

#include <numeric>
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
	return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}
