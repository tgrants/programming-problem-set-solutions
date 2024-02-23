// Count the Digit
// Clang 8 C++17

class CountDig {
public:
	static int nbDig(int n, int d) {
		int c = 0;
		for (int k = 1; k <= n; k++)
			for (int l = k*k; l; l/=10)
				if (l % 10 == d) c++;
		return d ? c : c + 1;
	}
};
