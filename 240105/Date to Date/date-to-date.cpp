#include <iostream>
using namespace std;

int main() {
	int m1, d1, m2, d2;
	short lastDays[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> m1 >> d1 >> m2 >> d2;
	int elapsedDays{};
	for (int i{ m1 }; i < m2; ++i) {
		elapsedDays += lastDays[i];
	}
	elapsedDays -= d1;
	elapsedDays += d2;
	cout << elapsedDays + 1;
	return 0;
}