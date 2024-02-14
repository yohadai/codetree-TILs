#include <iostream>

int main() {
	int n{}; char area[200'000]{}; 
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
				else if (area[currentIndex] == '\0' || area[currentIndex] == 'W') {
					area[currentIndex] = 'B';
				}
				else if (area[currentIndex] == 'B') {
					area[currentIndex] = 'G';
				}
				currentIndex++;
			}
			currentIndex--; //	칠하는 건 7번 칠하지만 움직이는 건 6번 움직인다. 원래 자리도 포함해서 range 번 칠하니까.
		}
		else if (direction == 'L') {
			for (int i{ 0 }; i < range; ++i) {
				if (area[currentIndex] == 'G') {
					// do nothing
				}
				else if (area[currentIndex] == '\0' || area[currentIndex] == 'B') {
					area[currentIndex] = 'W';
				}
				else if (area[currentIndex] == 'W') {
					area[currentIndex] = 'G';
				}
				currentIndex--;
			}
			currentIndex++; //	
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