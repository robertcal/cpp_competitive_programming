#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

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

int main() {

    ll n; cin >> n;
    string x; cin >> x;

    vector<ll> f(10000000, 0);
    for (ll i = 1; i < 10000000; ++i) {
        ll popcount = __builtin_popcountll(i);

        if (i % popcount == 0) {
            f[i] = 1;
        } else {
            f[i] += f[i % popcount] + 1;
        }
    }

    ll popcount = 0;
    for (ll i = 0; i < n; ++i) {
        if (x[i] == '1') {
            popcount++;
        }
    }

    // 1回目のmod計算
    // これを行っておくことで、mod以下になる
    ll n_mod_plus = 0;
    ll n_mod_minus = 0;
    for (int i = 0; i < n; ++i) {
        if (x[n - i - 1] == '1') {
            n_mod_plus += mod_pow(2, i, popcount + 1);
            n_mod_plus %= popcount + 1;
            if (popcount >= 2) {
                n_mod_minus += mod_pow(2, i, popcount - 1);
                n_mod_minus %= popcount - 1;
            }
        }
    }

    vector<ll> ans;
    for (ll i = 0; i < n; ++i) {
        ll n_mod_plus_tmp = n_mod_plus;
        ll n_mod_minus_tmp = n_mod_minus;
        if (x[n - i - 1] == '0') {
            n_mod_plus_tmp += popcount + 1;
            n_mod_plus_tmp += mod_pow(2, i, popcount + 1);
            n_mod_plus_tmp %= popcount + 1;
            ans.push_back(f[n_mod_plus_tmp] + 1);
        } else {
            if (popcount == 1) {
                ans.push_back(0);
            } else {
                n_mod_minus_tmp += popcount - 1;
                n_mod_minus_tmp -= mod_pow(2, i, popcount - 1);
                n_mod_minus_tmp %= popcount - 1;
                ans.push_back(f[n_mod_minus_tmp] + 1);
            }
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto p : ans) {
        cout << p << endl;
    }
}