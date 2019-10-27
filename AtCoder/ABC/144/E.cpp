#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, k; cin >> n >> k;

    priority_queue<ll> a;
    for (ll i = 0; i < n; ++i) {
        ll t; cin >> t;
        a.push(t);
    }

    priority_queue<ll, vector<ll>, greater<ll>> f;
    for (ll i = 0; i < n; ++i) {
        ll t; cin >> t;
        f.push(t);
    }

    for (ll i = 0; i < k; ++i) {
        ll t = a.top();

        if (t == 0) {
            break;
        }

        a.pop();
        t -= 1;

        a.push(t);
    }

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        ll t = a.top();
        a.pop();

        ll s = f.top();
        f.pop();

        ans = max(t * s, ans);
    }

    cout << ans << endl;
}