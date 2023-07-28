// TODO: simplify

int quadrant(int x, int y) {
	return x < 0 ? y < 0 ? 3 : 2 : y < 0 ? 4 : 1;
}

bool quadrant_segment(const coord &A, const coord &B) {
	return quadrant(A.x, A.y) != quadrant(B.x, B.y);
}