// Convert an array of strings to array of numbers
// https://www.codewars.com/kata/5783d8f3202c0e486c001d23
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <string>
#include <vector>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
	std::vector<float> res;
	std::transform(arr.begin(), arr.end(), std::back_inserter(res), [](const std::string& str) {
		return std::stof(str);
	});
	return res;
}
