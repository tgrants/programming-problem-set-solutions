#include <vector>
#include <algorithm>

class Solution {
public:
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
		std::vector<bool> result;
		int max = *std::max_element(std::begin(candies), std::end(candies));
		for (int c : candies)
			result.push_back((max <= c + extraCandies) ? true : false );
		return result;
	}
};
