#include <string>

int solve(std::string s) {
	std::string vowels = "aeiou";
	int l = 0, m = 0;
	bool isVovel = false;
	for (int i = 0; i < s.size(); i++) {
		for (char c : vowels) {
			if (c == s[i]) {
				isVovel = true;
				break;
			}
			isVovel = false;
		}
		if (isVovel) {
			if (++l > m) m = l;
		} else l = 0;
	}
	return m;
}