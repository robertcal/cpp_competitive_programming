#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

//約数
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