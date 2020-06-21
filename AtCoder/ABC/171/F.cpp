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

    ll k; cin >> k;
    string s; cin >> s;
    ll n = s.length();

    ll keta = k + n;
    ll ans = 0;

    ll left = 0;
    for (ll left = 0; left <= k; ++left) {
        ll right = k - left; //右側の個数

        if (left >= n) {
            ll nokori = left - n;
            ll sum = mod_pow(26, left);
            sum -= mod_pow(26, nokori);
            if (sum < 0) sum += MOD;

            ans += sum;
            ans %= MOD;
        } else {
            if (left != 0) {
                ans += mod_pow(26, left);
            }
        }

        if (right >= n) {
            ll nokori = right - n;
            ll sum = mod_pow(26, right);
            sum -= mod_pow(26, nokori);
            if (sum < 0) sum += MOD;

            ans += sum;
            ans %= MOD;
        } else {
            if (right != 0) {
                ans += mod_pow(26, right);
            }
        }
    }

    ans %= MOD;

    cout << ans << endl;
}