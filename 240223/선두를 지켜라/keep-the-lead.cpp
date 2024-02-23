#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n{}, m{};
    std::cin >> n >> m;

    int aLocation[1'000'000]{}, bLocation[1'000'000]{};
    
    int v{}, t{}; int index{1};
    for (int i{};i < n; ++i) {
        std::cin >> v >> t;
        for (int j{}; j < t; ++j){
            aLocation[index] = aLocation[index - 1] + v;
            index++;
        }
    }

    index = 1;
    for (int i{};i < n; ++i) {
        std::cin >> v >> t;
        for (int j{}; j < t; ++j){
            bLocation[index] = bLocation[index - 1] + v;
            index++;
        }
    }

    int counter{}; bool flag{true};
    for (int i{1}; i < 1'000'000; ++i) {
        if (i == 1) {
            flag = aLocation[i] > bLocation[i];
            continue;
        }
        if (aLocation[i] == 0 && bLocation[i] == 0){
            break;
        }
        if (flag) {
            if (aLocation[i] < bLocation[i]) {
                flag = !flag;
                counter++;
            }
        }
        else {
            if (aLocation[i] > bLocation[i]) {
                flag = !flag;
                counter++;
            }
        }
    }

    
    std::cout << counter << std::endl;
    return 0;
}