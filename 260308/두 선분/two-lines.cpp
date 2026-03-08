#include <iostream>

using namespace std;

int arr[4];

int main() {
    for (int i{}; i < 4; ++i) {
        cin >> arr[i];
    }

    for (int i{}; i < 4; ++i) {
        if (i == 0 || i == 1) {
            if (arr[i] >= arr[2] && arr[i] <= arr[3]) {
                cout << "intersecting";
                return 0;
            }
        }
        else {
            if (arr[0] <= arr[i] && arr[i] <= arr[1]) {
                cout << "intersecting";
                return 0;
            }
        }
    }
    cout << "nonintersecting";

    return 0;
}