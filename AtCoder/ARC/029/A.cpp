#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    int ans = INF;

    for (int i = 0; i < (1 << n); ++i) {
        int a = 0;
        int b = 0;

        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                a += t[j];
            } else {
                b += t[j];
            }
        }

        ans = min(ans, max(a, b));
    }

    cout << ans << endl;
}