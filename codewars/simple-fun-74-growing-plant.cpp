int growingPlant(int up, int down, int desired) {
	int day = 1;
	for (int h = up; h < desired; day++, h += up - down);
	return day;
}