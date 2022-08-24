#include <stdio.h>

// V1 2022-08-22
void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		int temp = arr[i];
		int j = i - 1;
		for(; j >= 0 && arr[j] > temp; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;
	}
}

int main() {
	int n, hasZero = 0;
	scanf("%d", &n);
	int m[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
		if(hasZero)
			m[i] = -m[i];
		else if(m[i] == 0) {
			hasZero = 1;
			for (int j = 0; j <= i; j++)
				m[j] = -m[j];
		}
	}
	insertionSort(m, n);
	for(int i = 0; i < n; i++)
		printf("%d\n", m[i]);
}
