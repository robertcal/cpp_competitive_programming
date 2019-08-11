#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n; cin >> n;
    map<string, int> s;
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        s[str]++;
    }

    int m; cin >> m;
    map<string, int> t;
    for (int i = 0; i < m; ++i) {
        string str; cin >> str;
        t[str]++;
    }

    ll ans = 0;

    for (auto item : s) {
        ll tmp = item.second - t[item.first];
        ans = max(ans, tmp);
    }

    ans = max(ans, (ll)0); //これは実はいらなそう

    cout << ans << endl;
}