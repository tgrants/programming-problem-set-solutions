#include <cmath>
#include <vector>

int FindOutlier(std::vector<int> arr) {
	int parity = arr[0] % 2 && arr[1] % 2 ? arr[1] % 2 : arr[2] % 2;
	for (int i : arr) if (std::abs(i % 2) != std::abs(parity)) return i;
}