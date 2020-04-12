#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    string s; cin >> s;

    map<char, ll> ma;
    ma['R'] = 0;
    ma['G'] = 0;
    ma['B'] = 0;

    for (ll i = 0; i < n; ++i) {
        if (s[i] == 'R') ma['R']++;
        if (s[i] == 'G') ma['G']++;
        if (s[i] == 'B') ma['B']++;
    }

    ll ans = ma['R'] * ma['G'] * ma['B'];

    for (ll t = 1; t < n; ++t) {
        for (ll i = 0; i < n; ++i) {
            set<char> se;
            se.insert(s[i]);

            if (i + t >= n) break;
            se.insert(s[i + t]);

            if (i + t + t >= n) break;
            se.insert(s[i + t + t]);

            if (se.size() == 3) ans--;
        }
    }

    cout << ans << endl;
}