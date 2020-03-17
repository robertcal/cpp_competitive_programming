#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll left = -1;
    ll right = n-1;

    while (right - left > 1) {
        ll mid = (left + right) / 2;

        bool ok = true;
        ll size = 0;
        for (ll i = 0; i < mid; ++i) {
            size += a[i];
        }

        for (ll i = mid; i < n-1; ++i) {
            size += a[i];

            if (a[i+1] > 2 * size) {
                ok = false;
                break;
            }
        }

        if (ok) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << n - right << endl;
}