#include <stdio.h>

void quicksort(int [], int, int);
int partition(int [], int, int);
void swap(int*, int*);

int main() {
	int n;
	scanf("%d", &n);
	int m[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &m[i]);
	quicksort(m, 0, n - 1);
	for(int i = 0; i < n; i++)
		printf("%d\n", m[i]);
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
