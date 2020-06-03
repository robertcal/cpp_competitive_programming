#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 0; i <= n; ++i) {
        cin >> a[i];
    }

    vector<ll> mx(n + 1, LINF);
    ll m = 1;
    mx[0] = 1;
    for (ll i = 1; i <= n; ++i) {
        m *= 2;
        if (m <= (ll)1e15) {
            mx[i] = m;
        }
    }

    ll ans = 0;
    ll sum = 0;
    for (ll i = n; i >= 0; --i) {
        sum += a[i];
        if (sum > mx[i]) {
            sum = mx[i];
        }

        ans += sum;
    }

    cout << ans << endl;
}