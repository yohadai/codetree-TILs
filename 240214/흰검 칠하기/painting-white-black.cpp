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
				if (area[currentIndex] == 'G') {
					// do nothing
				}
				else {
					area[currentIndex] = 'B';
					areaBlack[currentIndex]++;
					if (areaWhite[currentIndex] >= 2 && areaBlack[currentIndex] >= 2) {
						area[currentIndex] = 'G';
					}
				}

				currentIndex++;
			}
			currentIndex--; 
		}
		else if (direction == 'L') {
			for (int i{ 0 }; i < range; ++i) {
				if (area[currentIndex] == 'G') {
					// do nothing
				}
				else {
					area[currentIndex] = 'W';
					areaWhite[currentIndex]++;
					if (areaWhite[currentIndex] >= 2 && areaBlack[currentIndex] >= 2) {
						area[currentIndex] = 'G';
					}
				}

				currentIndex--;
			}
			currentIndex++; 
		}
	}

	// 갯수 세는 부분
	int countWhite{}, countBlack{}, countGray{};
	for (int i{}; i < 200'000; ++i) {
		switch (area[i]) {
		case ('W'):
			countWhite++;
			break;
		case ('B'):
			countBlack++;
			break;
		case ('G'):
			countGray++;
			break;
		}
	}
	printf("%d %d %d", countWhite, countBlack, countGray);

	return 0;
}