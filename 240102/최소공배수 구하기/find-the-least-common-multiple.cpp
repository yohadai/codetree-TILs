#include <iostream>

// a <= b
unsigned int uclid(unsigned int a, unsigned int b){
    int counter{1};
    while (true){
        if (counter%a == 0 && counter%b == 0){
            return counter;
        }
        else
            ++counter;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    unsigned int a, b;
    std::cin >> a>> b;
    std::cout << uclid(a, b);
    return 0;
}