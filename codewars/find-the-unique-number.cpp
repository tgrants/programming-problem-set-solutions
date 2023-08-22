#include <vector>

float find_uniq(const std::vector<float> &v) {
	float n = v[0] == v[1] ? v[1] : v[2];
	for (float f : v) if (f != n) return f;
}