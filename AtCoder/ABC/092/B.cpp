#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll n, d, x; cin >> n >> d >> x;

    ll ans = x;
    for (ll i = 0; i < n; ++i) {
        ll a;
        cin >> a;

        for (int j = 1; j <= d; j+=a) {
            ++ans;
        }
    }

    cout << ans << endl;
}