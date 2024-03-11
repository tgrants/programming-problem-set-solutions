// Two Sum
// https://www.codewars.com/kata/52c31f8e6605bcc646000082
// 6kyu, Clang 8 C++17

#include <unordered_map>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
	std::unordered_map<int, int> mp;
	for (int i = 0; i < numbers.size(); i++) {
		if (mp.find(target - numbers[i]) == mp.end())
			mp[numbers[i]] = i;
		else
			return {mp[target - numbers[i]], i};
	}
	return {0, 0};
}
