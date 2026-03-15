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
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] > B[i]) {
            int diff = A[i] - B[i];
            A[i+1] += diff;
            ans += diff;
        }
    }
    // Please write your code here.
    cout << ans;
    return 0;
}