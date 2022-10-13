#include <string>

std::string how_much_i_love_you(int nb_petals) {  
	std::string phrases[] = {"not at all", "I love you", "a little", "a lot", "passionately", "madly"};
	return phrases[nb_petals % 6];
}