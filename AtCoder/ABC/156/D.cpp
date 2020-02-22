#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

const ll FAC_MAX = 510000;

ll fac[FAC_MAX]; //階乗
ll finv[FAC_MAX]; //階乗の逆元

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

void init() {
    fac[0] = 1;
    for (ll i = 1; i <= FAC_MAX; ++i) {
        fac[i] = (fac[i - 1] * i) % MOD; //階乗を計算
    }

    for (ll i = 0; i <= FAC_MAX; ++i) {
        finv[i] = mod_pow(fac[i], MOD - 2); //フェルマーの小定理を使い、階乗の逆元を計算
    }
}

//nCr
ll comb(ll n, ll r) {
    if (n < r) {
        return 0;
    }

    if (n < 0 || r < 0) {
        return 0;
    }

    return (((fac[n] * finv[r]) % MOD) * finv[n - r]) % MOD;
}

int main() {

    ll n, a, b; cin >> n >> a >> b;

    init();

    if (n == 2) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = (mod_pow(2, n) % MOD - 1) % MOD;

    ll c_a = 1;
    for (ll i = 0; i < a; ++i) {
        c_a = (c_a * (n - i)) % MOD;
    }

    c_a = (c_a * finv[a]) % MOD;

    ll c_b = 1;
    for (ll i = 0; i < b; ++i) {
        c_b = (c_b * (n - i)) % MOD;
    }

    c_b = (c_b * finv[b]) % MOD;

    ll t = (c_a + c_b) % MOD;

    if (ans < t) {
        ans += MOD;
    }
    ans = (ans - t) % MOD;

    cout << ans << endl;
}