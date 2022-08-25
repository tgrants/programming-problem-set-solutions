#include <vector>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor) {
    std::vector<int> res;
    for (int n : numbers)
        if (n % divisor == 0)
            res.push_back(n);
    return res;
}
