// Follow-up: do with O(n) Time, O(1) Space complexity

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count;
        for(int a : nums) {
            int c = 0;
            for(int b : nums)
                if(a > b)
                    c++;
            count.push_back(c);
        }
        return count;
    }
};
