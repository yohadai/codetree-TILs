#include <iostream>


int main() {
	int n{}; char area[200'000]{}; 
	short areaWhite[200'000]{}; // 하얀 색 칠한 횟수
	short areaBlack[200'000]{}; // 검은거
	int range{}; int currentIndex{100'000};
	char direction{};

	std::cin >> n;

	for (int i{}; i < n; ++i) {
		std::cin >> range >> direction;
		if (direction == 'R') {
			for (int i{ 0 }; i < range; ++i) {
				area[currentIndex] = 'B';
				
				currentIndex++;
			}
			currentIndex--; 
		}
		else if (direction == 'L') {
			for (int i{ 0 }; i < range; ++i) {
				area[currentIndex] = 'W';

				currentIndex--;
			}
			currentIndex++; 
		}
	}

	// 갯수 세는 부분
	int countWhite{}, countBlack{};
	for (int i{}; i < 200'000; ++i) {
		switch (area[i]) {
		case ('W'):
			countWhite++;
			break;
		case ('B'):
			countBlack++;
			break;
		}
	}
	printf("%d %d", countWhite, countBlack);

	return 0;
}