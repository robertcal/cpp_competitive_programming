#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    //約数列挙
    vector<ll> divisor;
    //片方は必ず√以下になる
    for (ll i = 1; i * i <= m; ++i) {
        if (m % i == 0) {
            divisor.push_back(i);

            ll j = m / i;

            if (i != j) {
                divisor.push_back(j);
            }
        }
    }

    sort(divisor.begin(), divisor.end());

    for (auto d : divisor) {
        if (d >= n) {
            cout << m / d << endl;
            return 0;
        }
    }
}