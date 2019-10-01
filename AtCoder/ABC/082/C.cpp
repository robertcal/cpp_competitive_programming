#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    map<ll, ll> a;

    for (int i = 0; i < n; ++i) {
        ll t; cin >> t;
        a[t] += 1;
    }

    ll ans = 0;

    for (auto t : a) {
        if (t.first > t.second) {
            ans += t.second;
        }

        if (t.first < t.second) {
            ans += t.second - t.first;
        }
    }

    cout << ans << endl;
}
