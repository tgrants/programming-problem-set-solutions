#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
	int p = 0;
	for (std::string g : games)
		p += (g[0] > g[2]) ? 3 : (g[0] == g[2]) ? 1 : 0;
	return p;
}