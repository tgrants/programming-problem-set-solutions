char getGrade(int a, int b, int c) {
	switch ((a + b + c) / 3) {
		case 0 ... 59: return 'F';
		case 60 ... 69: return 'D';
		case 70 ... 79: return 'C';
		case 80 ... 89: return 'B';
		case 90 ... 100: return 'A';
	}
}