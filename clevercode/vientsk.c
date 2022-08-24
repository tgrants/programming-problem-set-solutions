// WORK-IN-PROGRESS, NOT SUBMITTED

#include <stdio.h>

void quicksort(int [], int, int);
int partition(int [], int, int);
void swap(int*, int*);

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int sk[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &sk[i]);
	quicksort(sk, 0, n - 1);
	for (int i = 0; i < n - 1; i += k) {
		if(sk[i] != sk[i + 1]) {
			printf("%d", sk[i]);
			break;
		}
	}
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
