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

    const int msg_num = u[p-1];
    if (msg_num == 0) { // 예외 1.
        return 0;
    }
    set<char> s{};
    for (int i = 0; i < m; ++i) { 
        if (p-1 < i || u[i] == msg_num)
            s.insert(c[i]);
    }
    for (int i = 'A'; i < 'A' + n; ++i) {
        if (!s.contains(i)) {
            cout << char(i) << " ";
        }
    }
    // 그 사람 이하의 사람들을 제외한 사람들은 전부 다 잖아?
    // 예외 1. p번째 메시지를 모두 읽은 경우
    // 예외 2. p번째 메시지를 읽은 사람의 수가 그 전 메시지를 읽은 사람의 수와 같은 경우
    // Please write your code here.

    return 0;
}