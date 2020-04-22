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
            if (i != n) res.push_back(i);
            ll j = n / i;
            if (j != i && j != n) res.push_back(j);
        }
    }

    sort(res.begin(), res.end());
    return res;
}

int main() {

    ll n; cin >> n;

    vector<ll> divisor;
    divisor = calc_divisor(n);

    ll sum = 0;
    for (auto t : divisor) {
        sum += t;
    }

    if (sum == n) {
        puts("Perfect");
        return 0;
    }

    if (sum < n) {
        puts("Deficient");
    } else {
        puts("Abundant");
    };
}