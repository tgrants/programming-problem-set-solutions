#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
	int s = 0;
	for (int i : arr)
		s += i;
	return s % 2 ? "odd" : "even";
}
