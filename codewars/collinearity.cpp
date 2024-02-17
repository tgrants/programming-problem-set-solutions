bool collinearity(int x1, int y1, int x2, int y2) {
	if ((!x1 && !y1) || (!x2 && !y2)) return true;
	if ((!x1 && !x2) || (!y1 && !y2)) return true;
	return (float)x1 / x2 == (float)y1 / y2;
}

// Better solution: return x1 * y2 == x2 * y1;