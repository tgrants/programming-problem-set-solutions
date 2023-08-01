#include <algorithm>
#include <vector>

class Solution {
public:
	int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
		return std::count_if(hours.begin(), hours.end(), [&target](int hours) { return hours >= target; });
	}
};