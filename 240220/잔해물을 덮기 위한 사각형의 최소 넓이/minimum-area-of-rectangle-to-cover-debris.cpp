#include <iostream>

const int OFFSET{1'000};
const int SIZE{2 * OFFSET + 1};

int main() {
    // 여기에 코드를 작성해주세요.
    int coordinate[SIZE][SIZE]{};

    int x1[2]{}, y1[2]{}, x2[2]{}, y2[2]{};

    std::cin >> x1[0] >> y1[0];
    std::cin >> x2[0] >> y2[0];

    std::cin >> x1[1] >> y1[1];
    std::cin >> x2[1] >> y2[1];
    
    for (int x{x1[0]}; x < x2[0]; ++x){
        for (int y{y1[0]}; y < y2[0]; ++y){
            coordinate[x + OFFSET][y + OFFSET] = 1;
        }
    }

    for (int x{x1[1]}; x < x2[1]; ++x){
        for (int y{y1[1]}; y < y2[1]; ++y){
            coordinate[x + OFFSET][y + OFFSET] = 2;
        }
    }

    int maxWidth{}, maxHeight{};
    int tmpWidth{}, tmpHeight{};

    for (int x{x1[0]}; x < x2[0]; ++x){
        for (int y{y1[0]}; y < y2[0]; ++y){
            if ( coordinate[x + OFFSET][y + OFFSET] == 1 ){
                tmpHeight++;
            }
        }
        if (tmpHeight > maxHeight){
            maxHeight = tmpHeight;
        }
        tmpHeight = 0;
    }

    for (int y{y1[0]}; y < y2[0]; ++y){
        for (int x{x1[0]}; x < x2[0]; ++x){
            if ( coordinate[x + OFFSET][y + OFFSET] == 1 ){
                tmpWidth++;
            }
        }
        if (tmpWidth > maxWidth){
            maxWidth = tmpWidth;
        }
        tmpWidth = 0;
    }

    std::cout << maxHeight * maxWidth << std::endl;
    return 0;
}