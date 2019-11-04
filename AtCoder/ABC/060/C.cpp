#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, t; cin >> n >> t;

    vector<ll> time(n);
    for (ll i = 0; i < n; ++i) {
        cin >> time[i];
    }

    ll ans = t;

    for (ll i = 1; i < n; ++i) {
        if (time[i-1] + t <= time[i]) {
            ans += t;
        } else {
            ans += time[i] - time[i-1];
        }
    }

    cout << ans << endl;
}