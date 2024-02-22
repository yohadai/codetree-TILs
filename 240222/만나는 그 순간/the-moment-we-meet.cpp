#include <iostream>
#define SIZE 1'000'000

int main() {

    int n{}, m{};
    int aLocation[SIZE]{}, aMovedTime{1}, bMovedTime{1}, bLocation[SIZE]{}; int curLocation{}, curIndex{}, time{}; char dir{};

    std::cin >> n >> m;

    for (int i{}; i < n; ++i) {
        std::cin >> dir >> time;
        aMovedTime *= time;
        for (int t{}; t < time; ++t){
            aLocation[curIndex++] = (dir == 'R'? ++curLocation : --curLocation);
        }
    } 

    curLocation = 0; curIndex = 0; dir = '\0'; time = 0;

    for (int i{}; i < m; ++i) {
        std::cin >> dir >> time;
        bMovedTime *= time;
        for (int t{}; t < time; ++t){
            bLocation[curIndex++] = (dir == 'R'? ++curLocation : --curLocation);
        }
    } 

    int cnt{1}; bool flag{};
    for (int i{}; i < SIZE; ++i) {
        if (aLocation[i] == bLocation[i]) {
            break;
        }
        else {
            ++cnt;
        }

        if (i >= aMovedTime && i >= bMovedTime){
            flag = true;
        }
    }

    std::cout << (flag ? -1 : cnt) << std::endl;
    return 0;
}