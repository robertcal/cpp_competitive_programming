#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    map<string, ll> s;

    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;

        sort(str.begin(), str.end());

        if (s.count(str) == 1) { //mapに存在するかどうかはfindよりもcountの方が簡単に書ける
            s[str] += 1;
        } else {
            s[str] = 1;
        }
    }

    ll ans = 0;

    for (auto item : s) {
        ans += (item.second * (item.second - 1)) / 2; //mapでllにしておかないと、ここでオーバーフローする
    }

    cout << ans << endl;
}