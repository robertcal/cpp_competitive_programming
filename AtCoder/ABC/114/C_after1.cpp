#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll n;

vector<ll> num;

void rec(ll d, ll n) {
    if (d > 10) return;

    if (to_string(n).find('3') != string::npos && to_string(n).find('5') != string::npos && to_string(n).find('7') != string::npos) {
        num.push_back(n);
    }

    rec(d + 1, n * 10 + 3);
    rec(d + 1, n * 10 + 5);
    rec(d + 1, n * 10 + 7);
}

int main() {

    cin >> n;

    rec(0, 0);
    sort(num.begin(), num.end());

    ll ans = 0;
    for (ll x : num) {
        if (x <= n) ++ans;
    }

    cout << ans << endl;
}