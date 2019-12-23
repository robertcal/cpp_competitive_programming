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

    int x, y; cin >> x >> y;

    if ((x + y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int n = (x + y) / 3; //移動回数

    x -= n;
    y -= n;

    if (x < 0 || y < 0) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = comb(x + y, x, MOD);

    cout << ans << endl;
}