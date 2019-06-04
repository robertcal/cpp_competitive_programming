#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<pair<pair<string, int>, int>> p(N);

    for (int i = 0; i < N; ++i) {
        string S; cin >> S;
        int P; cin >> P;

        //-Pで入れると逆にソートできる！！
        p[i] = make_pair(make_pair(S, -P), i);
    }

    //firstのfirstが小さい順、firstのsecondが小さい順、secondが小さい順にソートされる
    sort(p.begin(), p.end());

    for (int i = 0; i < N; ++i) {
        cout << p[i].second + 1 << endl;
    }
}