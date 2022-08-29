#include <string>
#include <vector>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> res;
    std::string word;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == ' ' || i == s.size()) {
            res.push_back(word);
            word = "";
        } else
            word += s[i];
    }
    return res;
}
