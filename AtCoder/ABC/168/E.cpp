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
    for (ll i = 1; i < FAC_MAX; ++i) {
        fac[i] = (fac[i - 1] * i) % MOD; //階乗を計算
    }

    for (ll i = 0; i < FAC_MAX; ++i) {
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

    ll n; cin >> n;

    map<long double, ll> mp;
    map<long double, ll> mpr;
    vector<long double> a(n);
    vector<long double> b(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];

        mp[a[i] / b[i]]++;
        mpr[b[i] / a[i]]++;
    }

    ll ans = mod_pow(2, n) - 1;

    init();

    ll bad_c = 0;
    for (auto t : mp) {
        if (mpr[-t.first] > 0) {
            ll sum = t.second + mpr[-t.first];
            ll com = t.second * mpr[-t.first];
            bad_c += com * mod_pow(2, n - sum);
        }
    }

    bad_c /= 2;
    ans += MOD;
    ans -= bad_c;
    ans %= MOD;

    cout << ans << endl;
}