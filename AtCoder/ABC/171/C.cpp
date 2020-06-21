#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    ll cn = n;

    ll t = 26;
    ll cnt = 0;
    while (cn > 0) {
        cn -= t;
        cnt++;
        t *= 26;
    }

    t /= 26; // 文字列の範囲 676とか
    cn += t; // その中で何番目か
    cn--;

    string ans = "";
    for (ll i = 0; i < cnt; ++i) {
        ans += 'a';
    }

    ll k = t / 26;
    for (ll i = 0; i < cnt; ++i) {
        ll jun = cn / k;
        ans[i] = 'a' + jun;

        cn -= k * jun;
        k /= 26;
    }

    cout << ans << endl;
}