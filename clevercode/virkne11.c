#include <stdio.h>

void quicksort(int [], int, int);
int partition(int [], int, int);
void swap(int*, int*);

int main() {
	int n, m, c = 0, s = 0;
	scanf("%d %d", &n, &m);
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < m; i++)
		s += arr[i];
	for (int i = m; i < n; i++)
		if (arr[i] > s)
			c++;
	printf("%d", c);
}

// V1 2022-08-23
void quicksort(int arr[], int low, int high) {
	if (low < high) {
		int partitionIndex = partition(arr, low, high);
		quicksort(arr, low, partitionIndex);
		quicksort(arr, ++partitionIndex, high);
	}
}

int partition(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low - 1, j = high + 1;
	while (1) {
		do {i++;} while (arr[i] < pivot);
		do {j--;} while (arr[j] > pivot);
		if (i >= j) return j;
		swap(&arr[i], &arr[j]);
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
