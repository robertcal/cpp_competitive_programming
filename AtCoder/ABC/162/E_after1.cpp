#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//繰り返し二乗法
//x^n mod
ll mod_pow(ll x, ll n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 1) { //奇数
        return mod_pow(x, n - 1) * x % MOD; //偶数の再帰にできるように変形
    } else { //偶数
        ll t = mod_pow(x, n / 2); //半分のものを求めて、2乗する
        return t * t % MOD;
    }
}

int main() {

    int n, k; cin >> n >> k;

    vector<ll> cnt(k + 10, 0);
    for (int i = k; i >= 1; --i) {
        cnt[i] = mod_pow((ll)(k / i), (ll)n);

        ll t = 2 * i;
        while (t <= k) {
            cnt[i] -= cnt[t];
            t += i;
        }
    }

    ll ans = 0;
    for (int i = 1; i <= k; ++i) {
        ans += cnt[i] * i;
        ans %= MOD;
    }

    cout << ans << endl;
}