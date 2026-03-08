#include <iostream>
#include <algorithm>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    for (int i = 0; i < n; ++i) {
        int max_x1 = 0;
        int min_x2 = 0;
        for (int j = 0; j < n;++j) {
            if (j == i) continue;

            max_x1 = max(max_x1, x1[j]);
            min_x2 = min(min_x2, x2[j]);
            if (max_x1 < min_x2) {
                break;
            }
        }
        cout << "Yes";
        return 0;
    }
    // Please write your code here.
    cout << "No";
    return 0;
}