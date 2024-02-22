#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n{};
    std::cin >> n;

    int maxLength{};
    int length{};

    int sequence[1'000];
    for (int i{}; i < n; ++i){
        std::cin >> sequence[i];
        if (i == 0){
            length++;
            continue;
        }
        if (sequence[i - 1] < sequence[i]) {
            length++;
            
        }
        else {
            length = 1;
        }

        if (maxLength < length){
                maxLength = length;
        }
    }

    std::cout << maxLength;
    return 0;
}