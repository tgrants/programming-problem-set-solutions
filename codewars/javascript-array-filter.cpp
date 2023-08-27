#include <algorithm>
#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
	std::vector<int> res;
	std::copy_if(arr.begin(), arr.end(), std::back_inserter(res), [](int i){ return i % 2 == 0; });
	return res;
}