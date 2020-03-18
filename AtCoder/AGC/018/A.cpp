#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (a[n-1] < k) {
        puts("IMPOSSIBLE");
        return 0;
    }

    for (ll i = 0; i < n; ++i) {
        if (a[i] == k) {
            puts("POSSIBLE");
            return 0;
        }
    }

    ll t;

    for (ll i = 0; i < n; ++i) {
        if (a[i] > k) {
            t = a[i] - k;
        }
    }

    vector<ll> d(n-1);
    for (int i = 0; i < n-1; ++i) {
        d[i] = a[i+1] - a[i];

        if (d[i] == t) {
            puts("POSSIBLE");
            return 0;
        }
    }

    sort(d.begin(), d.end());

    
}