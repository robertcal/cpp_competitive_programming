#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S, T; cin >> S >> T;

    //変換、逆変換のテーブルを-1で初期化
    vector<int> start(26, -1);
    vector<int> goal(26, -1);

    for (int i = 0; i < S.size(); ++i) {
        int a = S[i] - 'a';
        int b = T[i] - 'a';

        if (start[a] != -1 || goal[b] != -1) {
            if (start[a] != b || goal[b] != a) {
                puts("No");
                return 0;
            }
        } else {
            start[a] = b;
            goal[b] = a;
        }
    }

    puts("Yes");
}