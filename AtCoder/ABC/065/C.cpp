#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

ll permutation(ll n, ll r) {
    ll p = 1;

    for (ll i = n; i >= n-r+1; --i) {
        p *= i;
        p = p % 1000000007;
    }

    return p;
}

int main() {

    ll n, m; cin >> n >> m;

    if (abs(n - m) > 1) {
        cout << 0 << endl;
        return 0;
    }

    if (abs(n - m) == 1) {
        ll a = permutation(n, n);
        ll b = permutation(m, m);

        cout << (a * b) % 1000000007 << endl;
        return 0;
    }

    ll c = permutation(n, n);

    cout << (c * c * 2) % 1000000007 << endl;
}