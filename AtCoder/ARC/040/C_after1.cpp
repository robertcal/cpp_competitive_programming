#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int ans = 0;

    //右上から確定して塗っていく
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= 0; --j) {
            if (s[i][j] == '.') {
                ans++;

                for (int k = 0; k <= j; ++k) {
                    s[i][k] = 'o';
                }

                for (int k = j; k < n; ++k) {
                    if (i + 1 == n) break;
                    s[i + 1][k] = 'o';
                }
            }
        }
    }

    cout << ans << endl;
}