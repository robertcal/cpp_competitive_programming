#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll x; cin >> x;

    ll ans = 0;

    ans += x / 500 * 1000;

    x %= 500;

    ans += x / 5 * 5;

    cout << ans << endl;
}