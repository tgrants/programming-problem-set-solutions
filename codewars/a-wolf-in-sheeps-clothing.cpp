// A wolf in sheep's clothing
// Clang 8 C++17

#include <algorithm>
#include <string>
#include <vector>

std::string warn_the_sheep(const std::vector<std::string>& queue) {
	if (queue.back() == "wolf") return "Pls go away and stop eating my sheep";
	auto it = std::find(queue.begin(), queue.end(), "wolf") + 1;
	return "Oi! Sheep number " + std::to_string(queue.end() - it) + "! You are about to be eaten by a wolf!";
}

// Slightly scuffed solution