#include <vector>

float find_uniq(const std::vector<float> &v) {
	float num = v[0] == v[1] ? v[0] : v[0] == v[2] ? v[0] : v[1];
	for (float f : v) if (f != num) return f;
}