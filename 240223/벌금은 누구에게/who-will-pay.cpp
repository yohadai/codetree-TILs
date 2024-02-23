#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n{}, k{}, m{};
    std::cin >> n >> m >> k;
    int studWarning[101]{};

    int counter{-1}; int studNum{};
    for (int i{}; i < m; ++i){
        std::cin >> studNum;
        studWarning[studNum]++;
        if (studWarning[studNum] == k){
            counter = studNum;
        }
    }

    std::cout << counter;
    return 0;
}