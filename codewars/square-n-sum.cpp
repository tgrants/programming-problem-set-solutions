#include <vector>

int square_sum(const std::vector<int>& numbers) {
	int sum = 0;
	for (int n : numbers)
		sum += n * n;
	return sum;
}