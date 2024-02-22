#include <iostream>
#define SIZE 1'000'000

int main() {

    int n{}, m{};
    int aLocation[SIZE]{}, bLocation[SIZE]{}; int curLocation{}, curIndex{}, time{}; char dir{};

    std::cin >> n >> m;

    for (int i{}; i < n; ++i) {
        std::cin >> dir >> time;
        for (int t{}; t < time; ++t){
            aLocation[curIndex++] = (dir == 'R'? ++curLocation : --curLocation);
        }
    } 

    curLocation = 0; curIndex = 0; dir = '\0'; time = 0;

    for (int i{}; i < m; ++i) {
        std::cin >> dir >> time;
        for (int t{}; t < time; ++t){
            bLocation[curIndex++] = (dir == 'R'? ++curLocation : --curLocation);
        }
    } 

    int cnt{1};
    for (int i{}; i < SIZE; ++i) {
        if (aLocation[i] == bLocation[i]) {
            break;
        }
        else{
            ++cnt;
        }
    }

    std::cout << cnt;
    return 0;
}