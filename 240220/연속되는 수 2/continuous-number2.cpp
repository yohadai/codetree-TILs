#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int counter{}; int maxCount{};
    int n;
    std::cin >> n;
    int numbers[1'000]{};
    for (int i{}; i < n; ++i){
        std::cin >> numbers[i];
    }
    for (int i{}; i < n; ++i){
        if (i == 0 || numbers[i] == numbers[i-1])
            ++counter;
            if (maxCount < counter)
                maxCount = counter;
        else {
            if (maxCount < counter)
                maxCount = counter;
            counter = 1;
        }
    }

    std::cout << maxCount;
    return 0;
}