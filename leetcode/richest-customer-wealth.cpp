#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int t = 0;
        for(auto rows : accounts) {
            int l = 0;
            for(auto cols : rows) {
                l += cols;
            }
            if (l > t)
                t = l;
        }
        return t;
    }
};
