#include <cmath>
#include <vector>

int elevator_distance(std::vector<int> array) {
	int distance = 0, floor = array[0];
	for (int i : array) {
		distance += std::abs(floor - i);
		floor = i;
	}
	return distance;
}