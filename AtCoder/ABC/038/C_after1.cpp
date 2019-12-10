#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//しゃくとり法で実装

int main() {

    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll res = 0;
    int right = 1; //[0, 1)は確実に条件を満たす
    for (int left = 0; left < n; ++left) {
        //rightを1個進めたものが条件を満たすか
        //right <= leftとしているのは、right = leftになった時にrightを+1して、resに加えるためみたい
        while (right < n && (right <= left || a[right - 1] < a[right])) {
            ++right;
        }

        res += right - left;
        if (left == right) {
            ++right;
        }
    }

    cout << res << endl;
}