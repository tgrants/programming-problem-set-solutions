unsigned int cookingTime(unsigned int eggs) {
	return (eggs / 8 + (eggs % 8 > 0)) * 5;
}

// Alternative solutions: std::ceil or eggs + 7