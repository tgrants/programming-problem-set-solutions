#include <vector>
std::vector<int> countBy(int x, int n){
	std::vector<int> res;
	for (int i = x; i <= n * x; i += x)
		res.push_back(i);
	return res;
}
