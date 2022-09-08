#include <stdio.h>
#include <string.h>

int main() {
	int n, a, k;
	scanf("%d %d %d", &n, &a, &k);

	double v[n], t[n];
	for (int i = 0; i < n; i++)
		v[i] = 0;
	v[a - 1] = 1;

	for (int i = 0; i < k; i++) {
		if (n > 3) {
			t[0] = v[1] / 2;
			t[1] = v[0] + v[2] / 2;
			t[n - 1] = v[n - 2] / 2;
			t[n - 2] = v[n - 1] + v[n - 3] / 2;
			for (int j = 2; j < n - 2; j++)
				t[j] = (v[j - 1] + v[j + 1]) / 2;
		}
		else {
			t[0] = v[1] / 2;
			t[1] = v[0] + v[2];
			t[2] = v[1] / 2;
		}
		memcpy(v, t, sizeof(double) * n);
	}
	for (int i = 0; i < n; i++)
		printf("%.4lf ", v[i]);
}
