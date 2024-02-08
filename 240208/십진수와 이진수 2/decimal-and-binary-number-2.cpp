#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int notation{2};
    int n{};
    char result[11]{};

    std::cin >> result;
    for (int i{}; i < 10; ++i){
        if (result[i] == '\0')
            break;
        n = 2*n + (result[i] - '0');
    }

    n *= 17;
    int result2[11]{};

    int cnt{};
    while (true){
        if (n < notation){
            result2[cnt] = n;
            break;
        }

        result2[cnt++] = n % notation;
        n = n / notation;
    }

    for (int i{}; i <= cnt; ++i){
        std::cout << result2[cnt - i];
    }
    return 0;
}