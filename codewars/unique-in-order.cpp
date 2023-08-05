#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
	std::vector<T> out;
	for (auto i : iterable) if (!out.size() || i != out.back()) out.push_back(i);
	return out;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
	std::vector<char> out;
	for (char i : iterable) if (!out.size() || i != out.back()) out.push_back(i);
	return out;
}