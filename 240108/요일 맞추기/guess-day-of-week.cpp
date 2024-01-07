#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isFuture(int m1, int d1, int m2, int d2){ // true이면 2가 1 이후
	if (m1 < m2)
		return true;
	else if (m1 == m2 && d1 < d2)
		return true;
	else
		return false;
}

int main() {
	int m1, d1, m2, d2;
	short lastDays[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	bool beforeOrAfter{};
	string dayoftheweek[14]{ "", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
	cin >> m1 >> d1 >> m2 >> d2;
	
	beforeOrAfter = isFuture(m1, d1, m2, d2);

	int elapsedDays{};
	if (beforeOrAfter){
		for (int i{ m1 }; i < m2; ++i) {
			elapsedDays += lastDays[i];
		}
		elapsedDays += (d2 - d1);

	}
	else{
		for (int i{ m2 }; i < m1; ++i) {
			elapsedDays += lastDays[i];
		}
		elapsedDays += (d1 - d2);
	}


	cout << dayoftheweek[7 +(beforeOrAfter?elapsedDays%7:- elapsedDays%7)];

	return 0;
}