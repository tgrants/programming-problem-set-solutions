#include <algorithm>
#include <vector>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> res(arr);
    if (dir == 'R')
        std::sort(res.begin(), res.end());
    else
        std::sort(res.rbegin(), res.rend());
    return res;
}
