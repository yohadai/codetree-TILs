#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    for (int ignore = 0; ignore < n; ignore++) {
        int max_x1 = 0;
        int min_x2 = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (ignore == i) {
                continue;
            }
            max_x1 = max(max_x1, x1[i]);
            min_x2 = min(min_x2, x2[i]);
        }
        if (max_x1 <= min_x2) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}