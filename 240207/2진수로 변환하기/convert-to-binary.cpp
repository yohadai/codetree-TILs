#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n{29};
    int digits[20]{};
    int cnt{0};
    
    std::cin >> n;

    while (true){
        if (n < 2){
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % 2;
        n /= 2;
    }

    for (int i{1}; i <= cnt; ++i){
        std::cout << digits[cnt - i];
    }

    return 0;
}