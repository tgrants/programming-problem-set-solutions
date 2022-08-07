// WORK IN PROGRESS

#include <iostream>
#include <vector>

/*int** fill(int x, int y) {
	int r[x][y];
	int c = x * y;
	while (x > 0) {
		while (y > 0) {
			r[x][y] = --c;
			y--;
		}
		x--;
	}
	return r;
}*/

void print(std::vector<std::vector<int>> input) {
    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < input[i].size(); j++)
            std::cout << input[i][j] << " ";
        std::cout << std::endl;
    }
}

void print(std::vector<int> input) {
	for(int i : input)
		std::cout << i << " ";
	std::cout << std::endl;
}

std::vector<int> calc(std::vector<std::vector<int>> input) {
	return input[0];
}

int main() {
	/*int x, y;
	std::cin >> x >> y;
	auto t = fill(x, y);
	auto r = calc(t);
	print(t);
	print(r);*/
}
