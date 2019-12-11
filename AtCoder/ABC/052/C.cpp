#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll cnt[1010] = {};

    //2〜Nまでの素因数分解を行う
    for (ll i = 2; i <= n; ++i) {
        ll now = i;
        for (int j = 2; j <= now; ++j) {
            //ある数字で割り切れる場合はずっと割る
            while (now % j == 0) {
                ++cnt[j];
                now /= j;
            }
        }
    }

    ll ans = 1;

    for (int i = 0; i <= n; ++i) {
        if (cnt[i] != 0) {
            ans *= cnt[i] + 1;
            ans %= MOD;
        }
    }

    cout << ans << endl;
}