#include <algorithm>

int combat(int health, int damage){
	return std::max(health - damage, 0);
}