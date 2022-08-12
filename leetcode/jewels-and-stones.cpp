#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (char s : stones)
            for (char j : jewels)
                if (j == s)
                    count++;
        return count;
    }
};
