#include <string>

char trilingual_democracy(const std::string& g) {
	if (g[0] == g[1] == g[2]) return g[0];
	if (g[0] == g[1]) return g[2];
	if (g[0] == g[2]) return g[1];
	if (g[1] == g[2]) return g[0];
	if (g.find('D') == std::string::npos) return 'D';
	if (g.find('F') == std::string::npos) return 'F';
	if (g.find('I') == std::string::npos) return 'I';
	return 'K';
}

// Alt: return g[0] ^ g[1] ^ g[2];