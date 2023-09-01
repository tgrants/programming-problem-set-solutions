#include <vector>

int sum_even_numbers(const std::vector<double> &seq) {
	int sum = 0;
	for (double v : seq)
		if ((int)v == v && (int)v % 2 == 0) sum += v;
	return sum;
}