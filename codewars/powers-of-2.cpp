#include <cstdint>
#include <vector>

auto powers_of_two(int n) {
    std::vector<uint64_t> res;
    for (int i = 0; i <= n; i++)
        res.push_back((uint64_t)1 << i);
    return res;
}
