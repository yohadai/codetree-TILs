#include <iostream>	
#define SIZE 201
#define OFFSET 100

int main() {
	bool coordinate[SIZE][SIZE]{};

	int  n{};
	std::cin >> n;

	int x1{}, y1{};
	for (int i{}; i < n; ++i) {
		std::cin >> x1 >> y1;
		for (int j{}; j < 8; ++j) {
			for (int k{}; k < 8; ++k) {
				coordinate[x1 + OFFSET + k][y1 + OFFSET + j] = true;
			}
		}
	}

	int counter{};
	for (int i{}; i < SIZE; ++i) {
		for (int j{}; j < SIZE; ++j) {
			if (coordinate[i][j] == true)
				++counter;
		}
	}

	std::cout << counter;

	return 0;
}