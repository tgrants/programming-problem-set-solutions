// This program was made to see how a vectors capacity is increased

#include <iostream>
#include <vector>

#define N 10 // How many iterations to test?

int main() {
	std::vector<int> v;

	std::cout << "Initial capacity: " << v.capacity() << std::endl;

	for (int i = 0; i < N; ++i) {
		v.push_back(i);
		std::cout
			<< "Size: " << v.size()
			<< ", Capacity: " << v.capacity()
			<< std::endl;
	}

	return 0;
}

/* My results:
Initial capacity: 0
Size: 1, Capacity: 1
Size: 2, Capacity: 2
Size: 3, Capacity: 4
Size: 4, Capacity: 4
Size: 5, Capacity: 8
Size: 6, Capacity: 8
Size: 7, Capacity: 8
Size: 8, Capacity: 8
Size: 9, Capacity: 16
Size: 10, Capacity: 16
*/
