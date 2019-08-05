#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    ll cnt = 0;

    for (int i = 1; i <= N; ++i) {
        string s;
        s = i + '0'; //これって何で動かないのか？→2桁が入力された場合、2桁の文字列にならないため。1桁なら動く

        if (s.length() % 2 == 1) {
            ++cnt;
        }
    }

    cout << cnt << endl;
}