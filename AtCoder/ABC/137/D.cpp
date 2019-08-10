#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll n, m; cin >> n >> m;

    map<ll, ll> w;
    for (ll i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;

        auto itr = w.find(a);
        if (itr != w.end()) {
            w[a] = max(w[a], b);
        } else {
            w[a] = b;
        }
    }

    vector<ll> dp(m+1);

    dp[0] = 0;

}