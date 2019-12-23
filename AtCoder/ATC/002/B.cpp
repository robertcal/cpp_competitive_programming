#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//繰り返し二乗法
//x^n
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

    ll n, m, p; cin >> n >> m >> p;

    cout << mod_pow(n, p, m) << endl;
}