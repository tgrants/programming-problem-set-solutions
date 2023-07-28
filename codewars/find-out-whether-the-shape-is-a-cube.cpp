bool is_cube(int volume, int side) {
	return side > 0 && side * side * side == volume;
}