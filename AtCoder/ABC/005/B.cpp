#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int ans = INF;

    for (int i = 0; i < n; ++i) {
        int t; cin >> t;

        ans = min(ans, t);
    }

    cout << ans << endl;
}