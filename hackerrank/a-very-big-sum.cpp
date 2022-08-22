#include <iostream>

int main() {
    int n, a;
    long long sum;
    std::cin >> n;
    while(n) {
        std::cin >> a;
        sum += a;
        n--;
    }
    std::cout << sum;
}
