#include <cctype>
#include <string>

class Accumul {
	public:
		static std::string accum(const std::string &in) {
			std::string out;
			for (int i = 0; i < in.length();) {
				out += std::toupper(in[i]);
				for (int j = 0; j++ < i;) out += std::tolower(in[i]);
				if (++i < in.length()) out += '-';
			}
			return out;
		}
};

// Scuffed solution teehee >_<