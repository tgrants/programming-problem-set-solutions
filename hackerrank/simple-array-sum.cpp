#include <iostream>

int main() {
    int n, m, s = 0;
    std::cin >> n;
    while(n) {
        std::cin >> m;
        s += m;
        n--;
    }
    std::cout << s;
}
