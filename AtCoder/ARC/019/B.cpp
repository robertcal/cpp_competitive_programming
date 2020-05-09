#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    if (s.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 25 * (ll)s.length();

    string t; t = s;
    reverse(t.begin(), t.end());

    int diff_cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) {
            diff_cnt++;
        }
    }

    if (diff_cnt == 0) {
        //そもそも回文の場合
        //奇数文字だと、真ん中の文字を変えても回文になる
        if (s.length() % 2 == 1) {
            ans -= 25;
        }
    } else if (diff_cnt == 2) {
        ans -= 2;
    }

    cout << ans << endl;
}