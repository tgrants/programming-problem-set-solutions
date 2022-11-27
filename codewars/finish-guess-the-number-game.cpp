#include <stdexcept>

class Guesser {
	public:
		Guesser(int number, int lives) : number(number), lives(lives) {}
		bool guess(int n) {
			return lives ? n == number ? true : lives-- < 0 : throw std::exception();
		}
	private:
		int number, lives;
};