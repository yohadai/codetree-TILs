#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int counter{1}; int maxCount{1};
    int n;
    std::cin >> n;
    int numbers[1'000]{};
    for (int i{}; i < n; ++i){
        std::cin >> numbers[i];
    }
    for (int i{1}; i < n; ++i){
        if (numbers[i-1] == numbers[i]){
            ++counter;
            if (maxCount < counter){
                maxCount = counter;
            }
        }
        else {
            counter = 1;
        }
    }

    std::cout << maxCount;
    return 0;
}