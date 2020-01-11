#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//2で割り切れる回数を求める
int f(int x) {
    int res = 0;

    while (x % 2 == 0) {
        x /= 2;
        res++;
    }

    return res;
}

int main() {

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    //2で割る
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            cout << 0 << endl;
            return 0;
        }
        a[i] /= 2;
    }

    int t = f(a[0]); //2で割り切れる回数
    for (int i = 0; i < n; ++i) {
        //2で割り切れる回数が一緒でないとダメ
        if (f(a[i]) != t) {
            cout << 0 << endl;
            return 0;
        }

        a[i] >>= t; //a[i] /= 2^t
    }

    m >>= t;

    ll lcm = 1;
    for (int i = 0; i < n; ++i) {
        lcm = lcm / __gcd(lcm, (ll)a[i]) * a[i];

        //lcmはかなり大きい数値になる可能性がある
        if (lcm > (ll)m) {
            cout << 0 << endl;
            return 0;
        }
    }

    m /= lcm;
    int ans = (m + 1) / 2;

    cout << ans << endl;
}