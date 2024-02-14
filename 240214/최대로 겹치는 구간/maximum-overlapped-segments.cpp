#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int k{};
    int a{}, b{};
    int bricks[201]{};
    std::cin >> k;
    for (int i{}; i < k; ++i) {
        std::cin >> a >> b;
        for (int x{ a }; x < b; ++x) {
            bricks[x + 100]++;
        }
    }
    int maxBricksAmount{};
    for (int i{ 0 }; i < 201; ++i) {
        if (maxBricksAmount < bricks[i]) {
            maxBricksAmount = bricks[i];
        }
    }
    std::cout << maxBricksAmount;
    return 0;
}