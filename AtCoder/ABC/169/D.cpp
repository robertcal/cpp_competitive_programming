#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//素因数分解
vector<pair<ll, ll>> prime_factor(ll n) {
    vector<pair<ll, ll>> res;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i != 0) continue;

        ll num = 0;

        while (n % i == 0) {
            ++num;
            n /= i;
        }

        res.push_back(make_pair(i, num));
    }

    if (n != 1) res.push_back(make_pair(n, 1));

    return res;
}

int main() {

    ll n; cin >> n;

    vector<pair<ll, ll>> prime = prime_factor(n);

    ll ans = 0;
    for (auto p : prime) {
        ll sum = 0;
        ll cnt = 1;

        ll t = p.second;
        while (t > 0) {
            if (t - cnt < 0) {
                break;
            }

            t -= cnt;
            ++sum;
            ++cnt;
        }

        ans += sum;
    }

    cout << ans << endl;
}