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

    vector<ll> s(n+1, 0);
    for (ll i = 0; i < n; ++i) {
        s[i+1] = s[i] + a[i];
    }

    ll ans = 0;

    //二分探索
    //kを超える最初の場所を知りたい
    for (ll left = 0; left < n; ++left) {
        ll start = -1;
        ll end = n;

        if (s[n] - s[left] < k) {
            break;
        }

        while (end - start > 1) {
            ll mid = (start + end) / 2;

            if (s[mid] - s[left] >= k) {
                end = mid;
            } else {
                start = mid;
            }
        }

        ans += n - end + 1;
    }

    cout << ans << endl;
}