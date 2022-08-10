#include <string>
#include <vector>
using namespace std;

class Solution {
    int mostWordsFound(vector<string>& sentences) {
        int mostWords = 0;
        for (string sentence : sentences) {
            int words = 1;
            for (char c : sentence) {
                if (c == ' ')
                    words++;
            }
            if (words > mostWords)
                mostWords = words;
        }
        return mostWords;
    }
};
