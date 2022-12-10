#include <string>

std::string rps(const std::string& p1, const std::string& p2) {
	return p1[0] == p2[0] ? "Draw!" : "Player " + std::to_string(((p1[0] > p2[0]) ^ (p1[0] + p2[0] == 227)) + 1) + " won!";
}