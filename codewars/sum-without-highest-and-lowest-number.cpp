#include <vector>

int sum(std::vector<int> numbers) {
	if (numbers.size() <= 1) return 0; 
	int sum = 0, max = numbers[0], min = numbers[0];
	for (int n : numbers) {
		if (n > max) max = n;
		if (n < min) min = n;
		sum += n;
	}
	return sum - max - min;
}