#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll fac[510000]; //階乗
ll finv[510000]; //階乗の逆元

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
    for (ll i = 1; i <= 510000; ++i) {
        fac[i] = (fac[i - 1] * i) % MOD; //階乗を計算
    }

    for (ll i = 0; i <= 510000; ++i) {
        finv[i] = mod_pow(fac[i], MOD - 2); //フェルマーの小定理を使い、階乗の逆元を計算
    }
}

//nCr
ll comb(ll n, ll r) {
    return (((fac[n] * finv[r]) % MOD) * finv[n - r]) % MOD;
}

int main() {

}