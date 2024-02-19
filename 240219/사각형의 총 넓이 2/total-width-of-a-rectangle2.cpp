#include <iostream>	

int main() {
	bool coordinate[201][201]{};

	int n{};
	std::cin >> n;
	int x1{}, y1{}, x2{}, y2{};

	for (int i{}; i < n; ++i) {
		std::cin >> x1 >> y1 >> x2 >> y2;
		for (int x{ x1 }; x < x2; ++x) {
			for (int y{ y1 }; y < y2; ++y) {
				coordinate[x + 100][y + 100] = true;
			}
		}
	}

	int counter{};
	for (int x{ 0 }; x < 201; ++x) {
		for (int y{ 0 }; y < 201; ++y) {
			if (coordinate[x][y] == true) {
				counter++;
			}
		}
	}

	std::cout << counter;
	return 0;
}