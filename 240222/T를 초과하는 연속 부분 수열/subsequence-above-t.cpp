#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n{}, t{};
    std::cin >> n >> t;

    int length{0};
    int maxLength{0};

    int numbers[1'000];
    for (int i{}; i < n; ++i){
        std::cin >> numbers[i];
        
        if (i == 0) {
            if (numbers[i] > t) {
                length++;
            }
        }

        if (numbers[i - 1] > t && numbers[i] > t) {
            length++;
        }
        else if (numbers[i] > t) {
            length = 1;
        }
        else {
            length = 0;
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    std::cout << maxLength;

    return 0;
}