#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int k{};
    int a{}, b{};
    int bricks[100]{};
    std::cin >> k;
    for (int i{}; i < k; ++i) {
        std::cin >> a >> b;
        for (int x{ a - 1 }; x < b; ++x) {
            bricks[x]++;
        }
    }
    int maxBricksAmount{};
    for (int i{ 0 }; i < 100; ++i) {
        if (maxBricksAmount < bricks[i]) {
            maxBricksAmount = bricks[i];
        }
    }
    std::cout << maxBricksAmount;
    return 0;
}