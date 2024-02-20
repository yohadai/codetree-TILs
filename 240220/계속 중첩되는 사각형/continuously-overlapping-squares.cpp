#include <iostream>
const int OFFSET{ 100 };
const int SIZE{ OFFSET * 2 + 1};

int main() {
    // 여기에 코드를 작성해주세요.
    int n{};
    std::cin >> n;

    char coordinate[SIZE][SIZE]{};
    int x1[10]{}, y1[10]{}, x2[10]{}, y2[10]{};
    
    bool redOrBlue{true};

    for (int i{}; i < n; ++i){
        std::cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for (int x{x1[i]}; x < x2[i]; ++x){
            for (int y{y1[i]}; y < y2[i]; ++y){
                coordinate[x + OFFSET][y + OFFSET] = (redOrBlue ? 'r' : 'b'); 
            }
        }
        redOrBlue = !redOrBlue;
    }
    
    int counter{};
    for (int x{0}; x < SIZE; ++x){
        for (int y{0}; y < SIZE; ++y){
            if( coordinate[x][y] == 'b')
                ++counter;
        }
    }

    std::cout << counter << std::endl;
    return 0;
}