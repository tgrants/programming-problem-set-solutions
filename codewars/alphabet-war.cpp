// Alphabet war
// https://www.codewars.com/kata/59377c53e66267c8f6000027
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <string>

std::string alphabetWar(std::string fight) {
	int outcome = 0;
	char letters[] = {'w', 'p', 'b', 's', ' ', 'z', 'd', 'q', 'm'};
	for (char c : fight) {
		int distance = std::distance(letters, std::find(letters, letters + 9, c));
		if (distance < 9) outcome += distance - 4;
	}
	return outcome ? outcome < 0 ? "Left side wins!" : "Right side wins!" : "Let's fight again!";
}
