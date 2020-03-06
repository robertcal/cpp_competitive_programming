#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool is_prime(ll n) {
    if (n == 2) return true;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    ll a, b; cin >> a >> b;

    set<ll> acd;
    set<ll> bcd;

    for (ll i = 1; i * i <= a; ++i) {
        if (a % i == 0) {
            acd.insert(i);
            acd.insert(a / i);
        }
    }

    for (ll i = 1; i * i <= b; ++i) {
        if (b % i == 0) {
            bcd.insert(i);
            bcd.insert(b / i);
        }
    }

    vector<ll> cd;

    for (auto t : acd) {
        if (bcd.count(t) != 0) {
            cd.push_back(t);
        }
    }

    ll ans = 0;

    for (auto t : cd) {
        if (t == 1) {
            ++ans;
            continue;
        }

        if (is_prime(t)) ++ans;
    }

    cout << ans << endl;
}