#include <iostream>
#include <set>
using namespace std;

int n, m, p;
char c[100];
int u[100];

int main() {
    cin >> n >> m >> p;

    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }
    if (u[p-1] == 0) {
        return 0;
    }
    set<char> s{};
    for (int i = p-1; i < m; ++i) { // p는 1부터 시작.
        s.insert(c[i]);
    }
    for (int i = 'A'; i < 'A' + n; ++i) {
        if (!s.contains(i)) {
            cout << char(i) << " ";
        }
    }
    // 그 사람 이하의 사람들을 제외한 사람들은 전부 다 잖아?
    // Please write your code here.

    return 0;
}