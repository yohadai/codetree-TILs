#include <iostream>
using namespace std;

int main() {
	int d, h, m;
	short lastDays[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> d >> h >> m;
	if (d < 11 || (d == 11 && h < 11) || (d == 11 && h == 11 && m < 11)) {
		cout << "-1";
		return 0;
	}

	cout << (d - 11) * 60 * 24 + (h - 11) * 60 + (m - 11);

	return 0;
}