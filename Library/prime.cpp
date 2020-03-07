#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

//素数判定
bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }

    return true;
}

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
