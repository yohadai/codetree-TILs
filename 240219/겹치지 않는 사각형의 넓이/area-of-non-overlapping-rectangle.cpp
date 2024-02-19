#include <iostream>	

int main() {
	bool coordinate[2001][2001]{};

	/*int n{};
	std::cin >> n;*/
	int x1[3]{}, y1[3]{}, x2[3]{}, y2[3]{};



	for (int i{}; i < 2; ++i) {
		std::cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
		for (int x{ x1[i]}; x < x2[i]; ++x) {
			for (int y{ y1[i]}; y < y2[i]; ++y) {
				coordinate[x + 1000][y + 1000] = true;
			}
		}
	}

	std::cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];
	for (int x{ x1[2] }; x < x2[2]; ++x) {
		for (int y{ y1[2] }; y < y2[2]; ++y) {
			coordinate[x + 100][y + 100] = false;
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