#include <iostream>

void func(int a, int b){
    std::cout << (a > b? a*2:a+10) <<" " <<(b > a? b*2:b+10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    std::cin >> a>> b;
    func(a, b);
    return 0;
}