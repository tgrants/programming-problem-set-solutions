namespace Triangle {
	bool isTriangle(int a, int b, int c) {
		return a - b < c && b - c < a && c - a < b;
	}
};