#include <iostream>

int main() {
    int count = 1;
    std::string input;
    std::cin >> input;
    for(char c : input) {
        if (c <= 'Z')
            count++;
    }
    std::cout << count;
}
