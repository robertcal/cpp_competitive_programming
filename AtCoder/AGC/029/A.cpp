#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    ll ans = 0;
    ll b_cnt = 0;

    for (ll i = 0; i < s.length(); ++i) {
        if (s[i] == 'W') {
            ans += b_cnt;
        } else {
            ++b_cnt;
        }
    }

    cout << ans << endl;
}