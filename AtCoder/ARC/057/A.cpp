#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, k; cin >> a >> k;

    ll ans = 0;

    ll sum = a;

    if (k == 0) {
        cout << 2000000000000 - sum << endl;
        return 0;
    }

    while (sum < 2000000000000) {
        sum += 1 + sum * k;
        ++ans;
    }

    cout << ans << endl;
}