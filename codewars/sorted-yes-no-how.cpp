#include <string>
#include <vector>

std::string is_sorted_and_how(std::vector<int> array) {
	bool ascending = true;
	bool descending = true;
	for (int i = 1; i < array.size(); i++) {
		if (array[i] < array[i - 1] && ascending) ascending = false;
		if (array[i] > array[i - 1] && descending) descending = false;
		if (!ascending && !descending) return "no";
	}
	return ascending ? "yes, ascending" : "yes, descending";
}