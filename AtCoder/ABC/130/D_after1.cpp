#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//しゃくとり法で解く
int main() {

    ll n, k; cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = 0;

    ll right = 0;
    ll sum = 0;

    for (ll left = 0; left < n; ++left) {
        //[left, right)の総和がk以上になる最小のright
        while (right < n && sum < k) {
            sum += a[right];
            ++right;
        }

        if (sum < k) {
            break;
        }

        ans += n - right + 1;
        sum -= a[left];
    }

    cout << ans << endl;
}
