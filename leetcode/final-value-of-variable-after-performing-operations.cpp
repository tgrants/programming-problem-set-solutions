#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string o : operations) {
            if (o == "--X" || o == "X--")
                x--;
            else if (o == "++X" || o == "X++")
                x++;
        }
        return x;
    }
};
