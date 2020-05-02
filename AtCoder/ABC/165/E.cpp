#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    ll s = n / 2;
    ll e = n / 2 + 1;

    for (ll i = 0; i < m; ++i) {
        cout << s << ' ' << e << endl;
        s--;
        e++;
        if (s < 0) s = n / 2;
        if (e > n) e = n / 2 - 1;
    }
}