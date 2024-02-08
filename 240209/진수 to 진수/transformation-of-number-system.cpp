#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int notation{};
    int notation2{};
    std::cin >> notation >> notation2;

    char result[20]{};
    std::cin >> result;

    int n{};
    for (int i{}; i < 20; ++i){
        if (result[i] == '\0')
            break;
        n = notation*n + (result[i] - '0');
    }

    int result2[20]{};

    int cnt{};
    while (true){
        if (n < notation2){
            result2[cnt] = n;
            break;
        }

        result2[cnt++] = n % notation2;
        n = n / notation2;
    }

    for (int i{}; i <= cnt; ++i){
        std::cout << result2[cnt - i];
    }
    return 0;
}