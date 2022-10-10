#include <functional>

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2) {
	value ? func1() : func2();
}