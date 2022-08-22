// Follow up: stable_partition

#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> res;
    int zeroCount = 0;
    for (int i : input) {
        if (i == 0)
            zeroCount++;
        else
            res.push_back(i);
    }
    for (; zeroCount; zeroCount--)
        res.push_back(0);
    return res;
}
