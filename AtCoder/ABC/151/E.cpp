#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//繰り返し二乗法
//x^n mod
ll mod_pow(ll x, ll n, ll mod) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 1) { //奇数
        return mod_pow(x, n - 1, mod) * x % mod; //偶数の再帰にできるように変形
    } else { //偶数
        ll t = mod_pow(x, n / 2, mod); //半分のものを求めて、2乗する
        return t * t % mod;
    }
}

//aCb mod
ll comb(ll a, ll b, ll mod) {
    if (b > a - b) {
        return comb(a, a - b, mod); //aCb <=> aCa-b
    }

    ll c = 1;
    ll d = 1;

    for (ll i = 0; i < b; ++i) {
        c *= a - i;
        c %= mod;

        d *= b - i;
        d %= mod;
    }

    return c * mod_pow(d, mod - 2, mod) % mod; //フェルマーの小定理より
}

int main() {

    ll n, k; cin >> n >> k;

    ll ma = 0;
    ll mi = LINF;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        ma = max(ma, a[i]);
        mi = min(mi, a[i]);
    }

    ll combi = comb(n, k, MOD);

    ll ans = (ma - mi) % MOD * combi;


}