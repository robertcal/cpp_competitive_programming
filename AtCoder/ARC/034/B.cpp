#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll sum(ll n) {
    ll res = 0;

    while (n > 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {

    ll n; cin >> n;

    vector<ll> ans;
    for (ll i = 1; i <= 162; ++i) {
        if (n <= i) break;

        ll x = n - i;

        if (sum(x) == i) {
            ans.push_back(x);
        }
    }

    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto t : ans) {
        cout << t << endl;
    }
}