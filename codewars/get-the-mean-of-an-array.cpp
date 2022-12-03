#include <numeric>
#include <vector>

int get_average(std::vector <int> marks) {
	return std::accumulate(marks.begin(), marks.end(), 0) / marks.size();
}