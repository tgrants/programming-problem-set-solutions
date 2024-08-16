// Are the numbers in order?
// https://www.codewars.com/kata/56b7f2f3f18876033f000307
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <vector>

bool isAscOrder(std::vector<int> arr) {
	return std::is_sorted(arr.begin(), arr.end());
}
