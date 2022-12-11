#include <string>

std::string chromosomeCheck(std::string sperm) {
	return "Congratulations! You're going to have a " + std::string(sperm[1] - 88 ? "son." : "daughter.");
}