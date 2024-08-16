// Are the numbers in order?
// https://www.codewars.com/kata/56b7f2f3f18876033f000307
// 7kyu, Clang 8 / C18

int in_asc_order(const int *arr, int arr_size) {
	for (int i = 0; i < arr_size - 1; i++)
		if (arr[i] > arr[i + 1])
			return 0;
	return 1;
}
