// Flick Switch
// https://www.codewars.com/kata/64fbfe2618692c2018ebbddb
// 8kyu, Clang 8 C++17

#include <string>
#include <vector>

std::vector<bool> flick_switch(const std::vector<std::string>& arr) {
	std::vector<bool> result;
	result.reserve(arr.size());
	bool state = true;
	for (auto i : arr) {
		if (i == "flick") state = !state;
		result.push_back(state);
	}
	return result;
}
