#include <vector>

int stray(std::vector<int> v) {
	float n = v[0] == v[1] ? v[1] : v[2];
	for (int i : v) if (i != n) return i;
}