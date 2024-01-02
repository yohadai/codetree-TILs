#include <iostream>

int arr[100]{0};

void sumNumbers(int a1, int a2){
    int sum{};
    for (int i{a1}; i <= a2; ++i){
        sum += arr[i];
    }
    std::cout << sum << std::endl;
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    std::cin >> n >> m;
    for (int i{1}; i <= n; ++i){
        std::cin >> arr[i];
    }
    int a1, a2;
    for (int i{0}; i < m; ++i){
        std::cin >> a1 >> a2;
        sumNumbers(a1, a2);
    }

    return 0;
}