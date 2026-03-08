#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;
    bool clean[101]{false};
    for (int i{a}; i < b; ++i){
        clean[i] = true;
    }
    for (int i{c}; i < d; ++i){
        clean[i] = true;
    }
    // Please write your code here.
    int cnt{};
    for (bool c: clean){
        if (c) cnt += 1;
    }
    cout << cnt;
    return 0;
}