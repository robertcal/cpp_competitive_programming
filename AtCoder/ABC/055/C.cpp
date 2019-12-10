#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    if (n * 2 < m) {
        ll t = m - 2 * n;

        cout << n + t / 4 << endl;
    } else {
        cout << m / 2 << endl;
    }
}