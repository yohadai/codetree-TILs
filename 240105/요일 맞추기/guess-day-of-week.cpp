#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int m1, d1, m2, d2;
	short lastDays[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string dayoftheweek[14]{ "", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
	cin >> m1 >> d1 >> m2 >> d2;

	int elapsedDays{};
	for (int i{ m1 }; i < m2; ++i) {
		elapsedDays += lastDays[i];
	}
	elapsedDays += (d2 - d1);
	
	cout << dayoftheweek[7 + elapsedDays%7];

	return 0;
}