#include <vector>

bool consecutive(std::vector<int> arr, int a,int b){
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] == a && arr[i + 1] == b) return true;
		if (arr[i] == b && arr[i + 1] == a) return true;
	}
	return false;
}