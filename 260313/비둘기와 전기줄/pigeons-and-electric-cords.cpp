#include <iostream>

using namespace std;

int N;
int pigeon[11]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int main() {
    cin >> N;
    int ans = 0;
    int new_pigeon;
    int see;
    for (int i = 0; i < N; i++) {
        cin >> new_pigeon >> see;
        if (pigeon[new_pigeon] != -1 && pigeon[new_pigeon] != see)
            ans++;
        pigeon[new_pigeon] = see;
    }
    cout << ans;
    // Please write your code here.

    return 0;
}