#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    ll now = m;

    vector<ll> prime_fact;
    for (ll i = 2; i * i <= m; ++i) {
        while (now % i == 0) {
            prime_fact.push_back(i);
            now /= i;
        }
    }

    prime_fact.push_back(now);

    sort(prime_fact.rbegin(), prime_fact.rend());

    ll t = 1;
    ll ans = 1;

    for (auto p : prime_fact) {
        if (t < n && t * p >= n) {
            t *= p;
            continue;
        } else {
            t *= p;
        }

        if (t >= n) {
            ans *= p;
        }
    }

    cout << ans << endl;
}