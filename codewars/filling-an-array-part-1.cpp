#include <vector>

std::vector<int> arr(int n = 0) {
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	return a;
}
