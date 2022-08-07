#include <string>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int l = 0;
        for(char c : n) {
            if(c > l)
                l = c;
        }
        return l - 48;
    }
};
