#include <numeric>
#include <vector>

std::vector<int> reverseSeq(int n) {
	std::vector<int> v(n);
	std::iota(std::rbegin(v), std::rend(v), 1);
	return v;
}