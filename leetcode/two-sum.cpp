#include <vector>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		for (int i = 0; i < nums.size() - 1; i++)
			for (int j = i + 1; j < nums.size(); j++)
				if (nums[i] + nums[j] == target)
					return {i, j};
		return {0, 0};
	}
};

// Alt: use hash table
