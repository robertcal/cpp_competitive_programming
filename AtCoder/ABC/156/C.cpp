#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> x(n);
    for (ll i = 0; i < n; ++i) {
        cin >> x[i];
    }

//    sort(x.begin(), x.end());

    ll ans = LINF;

    for (ll i = 1; i <= 100; ++i) {
        ll sum = 0;

        for (ll j = 0; j < n; ++j) {
            sum += (x[j] - i) * (x[j] - i);
        }

        ans = min(ans, sum);
    }

    cout << ans << endl;
}