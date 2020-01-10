#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> a2(n);
    for (ll i = 0; i < n; ++i) {
        a2[i] = a[i] / 2;
    }

    ll lcm = (a2[0] / __gcd(a2[0], a2[1])) * a2[1];
    for (ll i = 2; i < n; ++i) {
        lcm = (lcm / __gcd(lcm, a2[i])) * a2[i];
    }

    ll t = m / lcm;

    if (t % 2 == 0) {
        cout << t / 2 << endl;
    } else {
        cout << t / 2 + 1 << endl;
    }
}