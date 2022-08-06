#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int p = 0;
        for (int i = 0; i < nums.size(); i++) {
            p += nums[i];
            nums[i] = p;
        }
        return nums;
    }
};
