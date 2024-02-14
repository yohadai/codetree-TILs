#include <iostream>

int main() {
	int n{}; int area[2001]{};
	std::cin >> n;
	int range{}; int currentIndex{1000};
	char direction{};

	for (int i{}; i < n; ++i) {
		std::cin >> range >> direction;
		if (direction == 'R') {
			for (int i{ 0 }; i < range; ++i) {
				area[currentIndex++]++;
			}
		}
		else if (direction == 'L') {
			currentIndex--;
			for (int i{ 0 }; i < range - 1; ++i) {
				area[currentIndex--]++;
			}
			area[currentIndex]++;
		}
	}

	int count{};
	for (int i{}; i < 2001; ++i) {
		if (area[i] >= 2) {
			count++;
		}
	}
	std::cout << count;
}