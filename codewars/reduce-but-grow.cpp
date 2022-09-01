#include <vector>

int grow(std::vector<int> nums) {
    int res = 1;
    for (int n : nums)
        res *= n;
    return res;
}
