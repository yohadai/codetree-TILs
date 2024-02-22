#include <iostream>
#define SIZE 1'000

bool isSameSign(int a, int b){
    if ( a * b >= 1){
        return true;
    }
    else
        return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int numbers[SIZE]{};
    int n{};
    std::cin >> n;
    for (int i{}; i < n; ++i){
        std::cin >> numbers[i];
    }

    int maxLength{1};
    int length{1};
    for (int i{1}; i < n; ++i){
        if (isSameSign(numbers[i - 1], numbers[i])) {
            length++;
            if (length > maxLength){
                maxLength = length;
            }
        }
        else {
            length = 1;
        }
    }

    std::cout << maxLength << std::endl;
    return 0;
}