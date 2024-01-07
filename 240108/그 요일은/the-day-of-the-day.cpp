#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int numberOfDays(int m, int d){ // 1월 1일부터의 일 수
    static int lastDays[13]{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int elapsedDays{}; 
    for (int i{}; i <= m; ++i){
        elapsedDays += lastDays[i];
    }
    elapsedDays += d;

    return elapsedDays;
}   

int main() {
    // 여기에 코드를 작성해주세요.
    int m1{}, d1{}, m2{}, d2{};
    cin >> m1 >> d1 >> m2 >> d2;
    int elapsedDays{numberOfDays(m2, d2) - numberOfDays(m1, d1)};
    vector<string> dayOfWeek{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string day{};
    cin >> day;
    int passedTime{elapsedDays/7};
    
    for (int i{}; i < 7; ++i){
        if (dayOfWeek[i] == day){
            if (i < elapsedDays%7){
                passedTime += 1;
            }
            break;
        }
    }

    cout << passedTime;

    return 0;
}