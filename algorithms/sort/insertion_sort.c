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
