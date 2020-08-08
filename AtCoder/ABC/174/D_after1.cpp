#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    // 全て白にした場合を最初に考える
    int w = 0;
    int r = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R') {
            r++;
        }
    }

    int ans = max(w, r);

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R') {
            r--;
        } else {
            w++;
        }

        int now = max(r, w);

        ans = min(ans, now);
    }

    cout << ans << endl;
}