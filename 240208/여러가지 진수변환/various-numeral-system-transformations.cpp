#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int notation{};

    int result[10]{};
    int n{};

    std::cin >> n >> notation;
    int cnt{};
    while (true){
        if (n < notation){
            result[cnt] = n;
            break;
        }

        result[cnt++] = n % notation;
        n = n / notation;
    }

    for (int i{}; i <= cnt; ++i){
        std::cout << result[cnt - i];
    }

    return 0;
}