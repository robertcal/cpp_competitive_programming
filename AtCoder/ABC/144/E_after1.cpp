#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> f(n);
    for (ll i = 0; i < n; ++i) {
        cin >> f[i];
    }

    sort(a.begin(), a.end());
    sort(f.rbegin(), f.rend());

    ll l = -1, r = 1e12; //左側は必ずfalse、右側は必ずtrueになるものを設定する

    while (l+1 < r) {
        ll mid = (l + r) / 2;

        bool ok = [&] { //参照でキャプチャ
            ll s = 0;
            for (ll i = 0; i < n; ++i) {
                s += max(0LL, a[i] - mid / f[i]); //定数をlong longで扱う
            }

            return s <= k;
        }(); //即時実行

        if (ok) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r << endl;
}