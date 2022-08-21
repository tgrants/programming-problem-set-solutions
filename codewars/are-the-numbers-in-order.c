int in_asc_order(const int *arr, int arr_size) {
	for (int i = 0; i < arr_size - 1; i++)
		if (arr[i] > arr[i + 1])
			return 0;
	return 1;
}
