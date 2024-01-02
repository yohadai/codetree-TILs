#include <iostream>
#include <string>
 bool isYoon(int year){
        bool yoon{false};
        if ((year%100 == 0 && year%400 == 0) || (year%4 == 0 && year%100!=0)){
            yoon = true;
        }
        return yoon;
    }

const int days[13]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const std::string season[13]{"?", "Winter","Winter","Spring","Spring","Spring"
                ,"Summer","Summer","Summer","Fall","Fall","Fall"
                ,"Winter"};

std::string printSeason(int year, int month, int day){
    int lastDay{days[month]};
    if (month == 2 && isYoon(year)){
        lastDay++;
    }

    if (day > lastDay){
        return "-1";
    }
    else{
        return season[month];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
   int year, month, day;
   std::cin >> year >> month >> day;
   std::cout << printSeason(year, month, day);
    return 0;
}