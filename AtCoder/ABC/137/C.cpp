#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n; cin >> n;

    map<vector<ll>, ll> S;

    for (ll i = 0; i < n; ++i) {
        vector<ll> t(30, 0);

        string s;
        cin >> s;

        for (ll j = 0; j < s.size(); ++j) {
            ++t[s[j] - 'a'];
        }

        auto itr = S.find(t);
        if (itr != S.end()) {
            ++S[t];
        } else {
            S[t] = 1;
        }
    }

    ll ans = 0;

    for (auto itr = S.begin(); itr != S.end(); ++itr) {
        if (itr->second > 1) {
            ans += (itr->second * (itr->second - 1)) / 2;
        }
    }

    cout << ans << endl;
}