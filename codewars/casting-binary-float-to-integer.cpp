union U {
	int i;
	float f;
} u;

int convert_to_int(float f) {
	u.f = f;
	return u.i;
}