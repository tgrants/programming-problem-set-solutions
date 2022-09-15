#include <vector>

int index(const std::vector<int> &vector, int n) {
	if (n >= vector.size())
		return -1;
	int v = vector[n];
	for (int i = 1; i < n; i++)
		v *= vector[n];
	return v;
}