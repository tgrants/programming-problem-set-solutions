#include <algorithm>
#include <vector>

int sumOfDifferences(std::vector<int> arr) {
	if (arr.size() < 2) return 0;
	std::sort(arr.rbegin(), arr.rend());
	int i = 0, sum = 0;
	while (i < arr.size() - 1)
		sum += arr[i] - arr[++i];
	return sum;
}