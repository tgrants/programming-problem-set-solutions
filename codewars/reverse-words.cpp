#include <algorithm>
#include <string>

std::string reverse_words(std::string str) {
    int a = 0, s = str.size();
    for (int i = 0; i <= s; i++) {
        if (i == s || str[i] == ' ') {
            reverse(str.begin() + a, str.begin() + i);
            a = i + 1;
        }
    }
    return str;
}
