#include <algorithm>
#include <vector>

int findOdd(std::vector<int> numbers) {
	std::sort(numbers.begin(), numbers.end());
	for (int i = 0, count = 0; i < numbers.size() - 1; i++) {
		if (numbers[i] == numbers[i + 1]) count++;
		else if (count % 2 == 0) return numbers[i];
		else count = 0;
	}
	return numbers[numbers.size() - 1];
}

// std::count(numbers.begin(), numbers.end(), elem) % 2 != 0