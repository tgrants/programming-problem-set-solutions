#include <string>
#include <vector>

std::vector<std::string> wave(std::string y) {
    std::vector<std::string> res;
    for (int i = 0; i < y.size(); i++) {
        std::string s = y;
        if (y[i] == ' ')
            continue;
        if (!isupper(y[0]))
            s[i] = toupper(y[i]);
        res.push_back(s);
    }
    return res;
}
