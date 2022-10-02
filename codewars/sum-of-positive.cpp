#include <vector>

int positive_sum(const std::vector<int> arr) {
	int sum = 0;
	for (int n : arr)
		if (n > 0)
			sum += n;
	return sum;
}