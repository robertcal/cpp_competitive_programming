#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<ll> prime;
bool is_prime[10000010];

void sieve(ll n) {
    for (ll i = 0; i <= n; ++i) {
        is_prime[i] = true;
    }

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            prime.push_back(i);
            for (ll j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

vector<pair<ll, ll>> prime_factor(ll n) {
    vector<pair<ll, ll>> res;
    for (auto p : prime) {
        if (p > n) break;
        if (n % p != 0) continue;

        ll num = 0;

        while (n % p == 0) {
            ++num;
            n /= p;
        }

        res.push_back(make_pair(p, num));
    }

    if (n != 1) res.push_back(make_pair(n, 1));

    return res;
}

int main() {

    ll n; cin >> n;
    ll ans = 0;

    sieve(n);

    for (int i = 1; i <= n; ++i) {
        auto pf = prime_factor(i);

        ll cnt = 0;
        for (auto t : pf) {
            cnt += t.second + 1;
        }

        ans += i * cnt;
    }

    cout << ans << endl;
}