#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    if (n % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    n /= 2;

    while (n > 0) {
        ans += n / 5;
        n /= 5;
    }

    cout << ans << endl;
}