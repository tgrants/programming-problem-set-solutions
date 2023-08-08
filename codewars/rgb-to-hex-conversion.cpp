#include <algorithm>
#include <iomanip>
#include <sstream>

class RGBToHex {
	public:
		static std::string rgb(int r, int g, int b) {
			return hex(r) + hex(g) + hex(b);
		}
		static std::string hex(int v) {
			std::ostringstream oss;
			oss << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << std::clamp(v, 0, 255);
			return oss.str();
		}
};