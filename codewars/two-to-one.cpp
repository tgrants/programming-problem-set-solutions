#include <set>
#include <string>

class TwoToOne {
	public:
		static std::string longest(const std::string &s1, const std::string &s2) {
			std::string str = s1 + s2;
			std::set<char> set(str.begin(), str.end());
			return std::string(set.begin(), set.end());
		}
};