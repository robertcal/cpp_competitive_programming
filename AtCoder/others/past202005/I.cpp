#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, q; cin >> n >> q;

    vector<ll> h(n);
    vector<ll> w(n);
    for (ll i = 0; i < n; ++i) {
        h[i] = i;
        w[i] = i;
    }

    bool rev = false;
    for (ll i = 0; i < q; ++i) {
        int t; cin >> t;

        if (t == 1) {
            int a, b; cin >> a >> b;
            --a; --b;

            if (rev) {
                swap(w[a], w[b]);
            } else {
                swap(h[a], h[b]);
            }
        } else if (t == 2) {
            int a, b; cin >> a >> b;
            --a; --b;

            if (rev) {
                swap(h[a], h[b]);
            } else {
                swap(w[a], w[b]);
            }
        } else if (t == 3) {
            if (rev) {
                rev = false;
            } else {
                rev = true;
            }
        } else {
            // 出力
            int a, b; cin >> a >> b;
            --a; --b;

            if (rev) {
                cout << n * h[b] + w[a] << endl;
            } else {
                cout << n * h[a] + w[b] << endl;
            }
        }
    }
}