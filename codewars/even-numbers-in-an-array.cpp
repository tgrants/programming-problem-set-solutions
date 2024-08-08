// Even numbers in an array
// https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c
// 7kyu, Clang 8 C++17

#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
	std::vector<int> result(n);
	for (auto it = arr.rbegin(); n > 0 && it != arr.rend(); ++it)
		if (*it % 2 == 0) result[--n] = *it;
	return result;
}
