// Follow-up: solve with log2

unsigned alexMistakes(unsigned numberOfKatas, unsigned timeLimit) {
	timeLimit -= numberOfKatas * 6;
	unsigned time = 0, mistakeTime = 5, mistakes = 0;
	while (time <= timeLimit) {
		time += mistakeTime;
		mistakeTime <<= 1;
		mistakes++;
	}
	return mistakes - 1;
}