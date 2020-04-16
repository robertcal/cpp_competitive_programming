#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<ll> t(n);
    for (ll i = 0; i < n; ++i) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    ll time = 0;
    map<ll, ll> ma;

    for (int i = 0; i < n; ++i) {
        time += t[i] * (n - i);
        ma[t[i]]++;
    }

    ll combi = 1;
    for (auto t : ma) {
        ll tmp = 1;
        for (int i = 1; i <= t.second; ++i) {
            tmp *= i;
            tmp %= MOD;
        }

        combi *= tmp;
        combi %= MOD;
    }

    cout << time << endl;
    cout << combi << endl;
}