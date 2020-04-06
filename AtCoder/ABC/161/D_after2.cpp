#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<ll> lun;

void rec(ll d, ll n) {
    lun.push_back(n);

    if (d > 10) return;

    for (ll i = -1; i <= 1; ++i) {
        ll t = n % 10 + i;

        if (0 <= t && t <= 9) rec(d + 1, n * 10 + t);
    }
}

int main() {

    ll k; cin >> k;

    for (ll i = 1; i <= 9; ++i) {
        rec(1, i);
    }

    sort(lun.begin(), lun.end());

    cout << lun[k - 1] << endl;
}