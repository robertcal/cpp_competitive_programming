#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    ll ans = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) continue;

        if (i % 3 == 0) continue;
        if (i % 5 == 0) continue;

        ans += i;
    }

    cout << ans << endl;
}