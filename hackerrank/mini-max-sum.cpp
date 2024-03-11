// C++20

#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

void miniMaxSum(std::vector<int> arr) {
	std::sort(arr.begin(), arr.end());
	long min = std::accumulate(arr.begin(), arr.end() - 1, 0L);
	long max = std::accumulate(arr.begin() + 1, arr.end(), 0L);
	std::cout << min << " " << max;
}

int main() {
	std::string str;
	std::vector<int> arr;
	
	while (std::cin >> str)
		arr.push_back(std::stol(str));

	miniMaxSum(arr);
	return 0;
}

/* Test case 7
 * In:  942381765 627450398 954173620 583762094 236817490
 * Out: 2390411747 3107767877
 */
