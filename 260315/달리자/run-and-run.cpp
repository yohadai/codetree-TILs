#include <iostream>

using namespace std;

int n;
int A[100];
int B[100];
int diff[100];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n; ++i) {
        diff[i] = A[i] - B[i];
    }
    int total = 0;
    for (int i = 0; i < n-1; ++i) {
        if (diff[i] <= 0) continue;
        for (int j = i+1; j < n; ++j) {
            if (diff[j] < 0) {
                total += diff[i] * (j - i);
                diff[j] += diff[i];
                diff[i] = 0;
                break;
            }
        }
    }
    // Please write your code here.
    cout << total;
    return 0;
}