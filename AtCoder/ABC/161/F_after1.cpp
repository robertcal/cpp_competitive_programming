#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<ll> calc_divisor(ll n) {
    vector<ll> res;

    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            ll j = n / i;
            if (j != i) res.push_back(j);
        }
    }

    sort(res.begin(), res.end());
    return res;
}

int main() {

    ll n; cin >> n;

    ll ans = 0;

    for (ll x : calc_divisor(n)) {
        if (x == 1) continue; //問題の制約で1は除外

        ll tmp = n;
        while (tmp % x == 0) tmp /= x;

        tmp %= x;
        if (tmp == 1) ++ans;
    }

    ans += calc_divisor(n - 1).size() - 1; //1は除外

    cout << ans << endl;
}