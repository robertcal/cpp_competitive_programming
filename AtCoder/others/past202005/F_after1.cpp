#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int a[500][26] = {};
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        for (int j = 0; j < n; ++j) {
            a[i][s[j] - 'a']++;
        }
    }

    string ans = string(n, 'a');

    for (int i = 0; i < (n + 1) / 2; ++i) {
        bool ok = false;
        if (i == n - 1 - i) {
            for (int j = 0; j < 26; ++j) {
                if (a[i][j] > 0) {
                    ok = true;
                    ans[i] = 'a' + j;
                    break;
                }
            }
        } else {
            for (int j = 0; j < 26; ++j) {
                if (a[i][j] > 0 && a[n - 1 - i][j] > 0) {
                    ok = true;
                    ans[i] = 'a' + j;
                    ans[n - 1 - i] = 'a' + j;
                    break;
                }
            }
        }

        if (!ok) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
}